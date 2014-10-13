#ifndef MYHEAD_H
#define MYHEHD_H
#include "E:\wangwei\Include\myhead.h"
#endif
//����
#define LIST_MAX_SIZE 100
#define LISTINCREMENT 10

template <typename ElemType>
class SqList
{
public:
	//���
	void clear();
	//ɾ����i��Ԫ��
	Status deleteElem(int i,ElemType& e);
	//ȡ��i��Ԫ��
	Status getElem(int i,ElemType& e);
	//��˳�����Ԫ�ظ���
	int getLength();
	//ȡ˳���洢�ռ�Ĵ�С
	int getListSize();
	//�ڵ�i��Ԫ��֮ǰ����һ��Ԫ��
	Status insert(int i,ElemType& e);
	//�ж�˳����Ƿ�Ϊ��
	bool isEmpty();
	//���ҵ�1����e����compare()��ϵ��Ԫ�ص����
	int locateElem(ElemType e,Status (*compare)(ElemType,ElemType));
	//����ĳԪ�صĺ��
	Status nextElem(ElemType e,ElemType& next_e);
	//���ظ�ֵ������Ķ���
	SqList<ElemType> operator=(SqList<ElemType> rightL);
	//����ĳԪ�ص�ǰ��
	Status priorElem(ElemType e,ElemType& prior_e);
	//��˳�������ѧ����ĳԪ��
	int sequentialSearch(ElemType e);
	//*********//
	SqList();
	virtual ~SqList();
	SqList(const SqList<ElemType>& otherL);
protected:
	ElemType *elem;
	int listSize;
	int n;
};
//*************//
template<typename ElemType>
SqList<ElemType>::SqList()
{
	elem = new ElemType[LIST_MAX_SIZE];
	assert(elem!=0);
	listSize = LIST_MAX_SIZE;
	n = 0;
}
//��������
template<typename ElemType>
SqList<ElemType>::~SqList()
{
	delete[] elem;
	listSize = 0;
	n = 0;
}
//������ʼ�����캯��
template<typename ElemType>
SqList<ElemType>::SqList(const SqList<ElemType>& otherL)
{
	elem = new ElemType[otherL.listSize];
	assert(elem!=0);
	listSize = otherL.listSize;
	n = otherL.n;
	
	for(int i=0;i<n;i++)
		elem[i]=otherL.elem[i];
}

//���
template<typename ElemType>
void SqList<ElemType>::clear()
{
	n = 0;
}
//ɾ����i��Ԫ��
template<typename ElemType>
Status SqList<ElemType>::deleteElem(int i,ElemType& e)
{
	if(i<1||i>n)
		return ERROR;
	e = elem[i-1];
	for(int j=i+1;j<=n;j++)
		elem[j-2] = elem[j-1];
	--n;
	return OK;
}
//ȡ��i��Ԫ��
template<typename ElemType>
Status SqList< ElemType>::getElem(int i,ElemType& e)
{
	if(i>n||i<1)
		return ERROR;
	e = elem[i-1];
	return OK;
}
//��˳�����Ԫ�ظ���
template<typename ElemType>
int SqList<ElemType>::getLength()
{
	return n;
}
//ȡ˳���洢�ռ�Ĵ�С
template<typename ElemType>
int SqList<ElemType>::getListSize()
{
	return listSize;
}
//�ڵ�i��Ԫ��֮ǰ����һ��Ԫ��
template<typename ElemType>
Status SqList<ElemType>::insert(int i,ElemType& e)
{
	ElemType *newbase;
	
	if(i<1||i>n+1)
		return ERROR;
	//
	if(n>=listSize)
	{
		newbase = new ElemType[listSize+LISTINCREMENT];
		assert(newbase!=0);
		for(int j=1;j<=n;j++)
			newbase[j-1]=elem[j-1];
		delete[] elem;
		elem=newbase;
		listSize+=LISTINCREMENT;
	}
	//��˳�������һ��Ԫ�ؿ�ʼ��ֱ����i��Ԫ�أ�ÿ��Ԫ�غ���һλ
	for(int j=n;j>=i;j--)
		elem[j]=elem[j-1];
	elem[i-1]=e;
	++n;
	return OK;
}

//�ж�˳����Ƿ�Ϊ��
template <typename ElemType>
bool SqList<ElemType>::isEmpty()
{
	return n?false:true;
}
//���ҵ�1����e����compare()��ϵ��Ԫ�ص����
template <typename ElemType>
int SqList<ElemType>::locateElem(ElemType e,Status (*compare)(ElemType,ElemType))
{
	int i;
	for(i=1;i<=n&&!(*compare)(elem[i-1],e);++i);
		if(i<=n)
			return i;
		else
			return 0;
}
//����ĳԪ�صĺ��
template <typename ElemType>
Status SqList<ElemType>::nextElem(ElemType e,ElemType& next_e)
{
	int i=locateElem(e,equal);
	if(i<1||i==n)
		return ERROR;
	else
		getElem(i+1,next_e);
	return OK;
}
//���ظ�ֵ������Ķ���
template <typename ElemType>
SqList<ElemType> SqList<ElemType>::operator=(SqList<ElemType> rightL)
{
	if(this!=&rightL)
	{
		if(listSize<rightL.listSize)
		{
			delete[] elem;
			elem = new ElemType[rightL.listSize];
			
			assert(elem!=0);
			listSize = rightL.listSize;
		}
		n = rightL.n;
		for(int i=1;i<=n;i++)
			elem[i-1]=rightL.elem[i-1];
	}
	return *this;
}
//����ĳԪ�ص�ǰ��
template <typename ElemType>
Status SqList<ElemType>::priorElem(ElemType e,ElemType& prior_e)
{
	int i=locateElem(e,equal);
	if(i<=1)
		return ERROR;
	else
		getElem(i-1,prior_e);
	return OK;
}
//��˳�������ѧ����ĳԪ��
template <typename ElemType>
int SqList<ElemType>::sequentialSearch(ElemType key)
{
	for(int i=1;i<=n&&key!=elem[i-1];++i);
	if(i<=n)
		return i;
	else
		return 0;
}