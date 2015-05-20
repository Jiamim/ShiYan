/////////////////////////////////////////////////
//MySqList.h˳������ݽṹC++�ඨ�壨�����ࣩ
/////////////////////////////////////////////////
#ifndef SQLIST_H
	#define SQLIST_H
	#include "e:\wangwei\Include\SqList.h"
#endif
#include <iomanip>
//˳������ݽṹC++�������������ࣩ
template <typename ElemType>
class MySqList:public SqList<ElemType>
{
public:
	void read(istream& in);
	void display(ostream& out)const;
	void randCreate();
};

//����˳���
template <typename ElemType>
void MySqList<ElemType>::read(istream& in)
{
	cout<<"����˳�����Ԫ�صĸ���"<<endl;
	cin>>n;
	cout<<"����"<<n<<"��Ԫ�ص�ֵ:";
	for(int i=1;i<=n;i++)
	{
		cin>>elem[i-1];
	}
}
//>>����
template <typename ElemType>
istream& operator>>(istream& in,MySqList<ElemType>& sq)
{
	sq.read(in);
	return in;
}
template <typename ElemType>
void MySqList<ElemType>::display(ostream& out)const
{
	int line=n/10+1;//ÿ����ʾ10��������line��
	int i=1,j=1;
	while(line--)//��Ϊ������ܻ����У�����һ��һ����ʾ
	{
	for(;i%11&&i<=n;i++)
		out<<"["<<setw(2)<<i<<"] ";
	out<<endl;
	for(;j%11&&j<=n;j++)
	{
		out<<setw(4)<<elem[j-1]<<" ";
	}
	cout<<endl;		
	}
}
template <typename ElemType>
ostream& operator<< (ostream& out,const MySqList<ElemType>& oD)
{
	oD.display(out);
	return out;
}
template <typename ElemType>
void MySqList<ElemType>::randCreate()
{
	srand((unsigned)time(NULL));
	n = rand()%10+1;
	for(int i=1;i<=n;i++)
	{
		elem[i-1]=rand()%100;
	}
}
//����
template <typename ElemType>
 MySqList<ElemType> unionSet
	 (MySqList<ElemType> firstL,MySqList<ElemType> secondL)
{
	ElemType e;
	MySqList<ElemType> thirdL(firstL);
	for(int i=1;i<=secondL.getLength();++i)
	{
		secondL.getElem(i,e);
		if(!firstL.locateElem(e,equal))
		{
			thirdL.insert(thirdL.getLength()+1,e);
		}
	}
	return thirdL;
}
 //����
 template <typename ElemType>
 MySqList<ElemType> intersectionSet
	 (MySqList<ElemType> firstL,MySqList<ElemType> secondL)
 {
	 int k=0;
	 ElemType e;
	 MySqList<ElemType> thirdL;
	 for(int i=1;i<=firstL.getLength();++i)
	 {
		 firstL.getElem(i,e);
		 if(secondL.locateElem(e,equal))
		 {
			 thirdL.insert(++k,e);
		 }
	 }
	 return thirdL;
 }
 //�
 template<typename ElemType>
 MySqList<ElemType> dirfferenceSet
	 (MySqList<ElemType> firstL,MySqList<ElemType> secondL)
 {
	 int k=0;
	 ElemType e;
	 MySqList<ElemType> thirdL;
	 for(int i=1;i<=firstL.getLength();++i)
	 {
		 firstL.getElem(i,e);
		 if(!secondL.locateElem(e,equal))
		 {
			 thirdL.insert(++k,e);
		 }
	 }
	 return thirdL;
 }