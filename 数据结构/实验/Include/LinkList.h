#ifndef MYHEAD_H
#define MYHEAD_H
#include "e:\wangwei\Include\myhead.h"
#endif
////////////////////////////////////////////////
//��ѭ�����������ݽṹC++�����������ࣩ
///////////////////////////////////////////////
template <typename ElemType>
class LinkList
{
public:
	class LinkNode
	{
	public:
		ElemType data;
		LinkNode *next;
	};
	typedef LinkNode * NodePointer;
	//��ѭ�������������
	void adverse();
	//��ѭ���������ÿ�
	void clear();
	//ɾ����ѭ����������������Ϊe�ĵ�һ�����
	Status deleteElem(ElemType e);
	//ɾ����ѭ���������е��ظ�ֵ
	void deleteRepeat();
	//ȡ��ѭ��������ĵ�i�����
	Status getElem(int i,ElemType& e);
	//ȡ��һ������ָ��
	NodePointer getHead();
	//���ѭ��������Ľ��ĸ���
	int getLength();
	//�ڵ�i�����֮ǰ����һ��������Ϊe�Ľ��
	Status insert(int i,ElemType e);
	//�жϷ�ѭ���������Ƿ�Ϊ��
	bool isEmpty();
	//���ҵ�1����e����compare��ϵ�Ľ��
	Status locateElem(ElemType e,Status (*compare)(ElemType,ElemType),int &i);
	//����ĳ����̵�������
	Status nextElem(ElemType e,ElemType& next_e);
	//����������Ķ���
	LinkList<ElemType> operator=(LinkList<ElemType> rightL);
	//����ĳ���ǰ����������
	Status priorElem(ElemType e,ElemType& prior_e);
	//*******************ϵͳ�Զ����õĹ��켰��������*********************
	LinkList();
	virtual ~LinkList();
	//������ʼ�����캯��
	LinkList(const LinkList<ElemType>& otherL);
protected:
	NodePointer head;
};
//��ѭ�������������
template <typename ElemType>
void LinkList<ElemType>::adverse()
{
	NodePointer r,p,q;
	if(!head)
		return;
	r = 0,p = head,q = p->next;
	while(p)
	{
		p->next = r;
		r = p;
		p = q;
		if(q)
			q = q->next;
	}
	head = r;
}
//��ѭ����������ÿ�
template <typename ElemType>
void LinkList<ElemType>::clear()
{
	NodePointer p,q;
	p = 0,q = head;
	while(q)
	{
		p = q;
		q = q->next;
		delete p;
	}
	head = 0;
}
//ɾ����ѭ����������������Ϊe�ĵ�һ�����
template <typename ElemType>
Status LinkList<ElemType>::deleteElem(ElemType e)
{
	NodePointer r,p;
	r = 0,p = head;
	while(p&&!equal(p->data,e))
	{
		r = p;
		p = p->next;
	}
	if(p==0)
		return ERROR;
	if(r==0)
		head=head->next;
	else
		r->next = p->next;
	delete p;
	return OK;
}
//ɾ���ظ�ֵ
template <typename ElemType>
void LinkList<ElemType>::deleteRepeat()
{
	NodePointer r,p,s;
	r = 0,p = head;
	while(p)
	{
		s = head;
		while(s!=p)
		{
			if(s->data==p->data)
			{
				r->next = p->next;
				delete p;
				p = r;
				break;//��ǰ�Ƚϵ�ÿһ�����ܱ�֤�������ظ�ֵ
			}
			s=s->next;
		}
		r = p;
		if(p)
			p=p->next;
	}
}
//ȡ��ѭ��������ĵ�i�����
template <typename ElemType>
Status LinkList<ElemType>::getElem(int i,ElemType& e)
{
	int j=1;
	NodePointer p = head;
	while(p&&j<i)
	{
		p = p->next;
		++j;
	}
	if(!p||j>i)
		return ERROR;
	e = p->data;
	return OK;
}
//ȡ��һ������ָ��
template <typename ElemType>
typename LinkList<ElemType>::NodePointer LinkList<ElemType>::getHead()
{
	return head;
}
//���ѭ��������Ľ��ĸ���
template <typename ElemType>
int LinkList<ElemType>::getLength()
{
	int n = 0;
	NodePointer p = head;
	while(p)
	{
		++n;
		p = p->next;
	}
	return n;
}
//�ڵ�i�����֮ǰ����һ��������Ϊe�Ľ��
template <typename ElemType>
Status LinkList<ElemType>::insert(int i,ElemType e)
{
	int j = 1;
	NodePointer p = head;
	NodePointer s;

	while(p&&j<i-1)
	{
		++j;
		p = p->next;
	}
	if(!p||j>i)
		return ERROR;
	s = new LinkNode;
	assert(s!=0);
	s->data = e;
	if(i==1)
	{
		s->next = p->next;
		head = s;
	}
	else
	{
		s->next = p->next;
		p->next = s;
	}
	return OK;
}
//�ж��Ƿ�Ϊ��
template <typename ElemType>
bool LinkList<ElemType>::isEmpty()
{
	return head?false:true;
}
//���ҵ�1����e����compare��ϵ�Ľ��
template <typename ElemType>
Status LinkList<ElemType>::locateElem(ElemType e,Status (*compare)(ElemType,ElemType),int &i)
{
	NodePointer p = head;
	i = 1;
	while(p&&!(*compare)(p->data,e))
	{
		p = p->next;
		i++;
	}
	if(!p)
		return ERROR;
	return OK;
}

template<typename ElemType>
Status LinkList<ElemType>::nextElem(ElemType e, ElemType& next_e)
{
	NodePointer p = head;
	while(p&&!equal(p->data,e))
		p = p->next;
	if(!p||!p->next)
		return ERROR;
	next_e = p->next->data;
	return OK;
}

template<typename ElemType>
LinkList<ElemType> LinkList<ElemType>::operator =(
	LinkList<ElemType> rightL)
{
	NodePointer p = 0;
	NodePointer rp = rightL.getHead();
	NodePointer s;
	//�ж���ߵĵ������Ƿ�����ұߵ�rightL
	if(this!=&rightL)
	{
		clear();
		while(rp)
		{
			s = new LinkNode;
			assert(s!=0);
			s->data = rp->data;
			if(!head)
				head = s;
			else
				p->next = s;
			p = s;
			rp = rp->next;
		}
		if(p)
			p->next = 0;
	}
	return *this;
}

template<typename ElemType>
Status LinkList<ElemType>::priorElem(ElemType e, ElemType& prior_e)
{
	NodePointer r = 0;
	NodePointer p = head;
	while(p&&!equal(p->data,e))
	{
		r = p;
		p = p->next;
	}
	if(!p||!r)
		return ERROR;
	prior_e = r->data;
	return OK;
}

template<typename ElemType>
LinkList<ElemType>::LinkList()
{
	head = NULL;
}

template<typename ElemType>
LinkList<ElemType>::~LinkList()
{
	clear();
}

template<typename ElemType>
LinkList<ElemType>::LinkList(const LinkList<ElemType>& otherL)
{
	NodePointer p;
	NodePointer op = otherL.head;
	NodePointer s;
	head = p = 0;
	//����otherL��ÿ�����
	while(op)
	{
		s = new LinkNode;
		assert(s!=0);
		s->data = op->data;
		if(!head)
			head = s;
		else
			p->next = s;
		p = s;
		op = op->next;
	}
	if(head)
		p->next = 0;
}
