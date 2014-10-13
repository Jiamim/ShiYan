/////////////////////////////////////////////////
//MyDoubleLinkList.hѭ��˫�������ݽṹC++�ඨ�壨�����ࣩ
/////////////////////////////////////////////////
#ifndef DOUBLELINKLIST_H
	#define DOUBLELINKLIST_H
	#include "e:\wangwei\Include\DoubleLinkList.h"
#include <iomanip>
#endif
template <typename ElemType>
class MyDoubleLinkList:public DoubleLinkList<ElemType>
{
public:
	void read(istream& in);
	void display(ostream& out);
	void randCreate();
};
//����read
template <typename ElemType>
void MyDoubleLinkList<ElemType>::read(istream& in)
{
	cout<<"\t������ѭ��˫�����н��ĸ�����";
	int n;
	in>>n;
	cout<<"\t������ѭ��˫����ÿ������������ֵ��";
	NodePointer s,p;
	p = head;
	for(int i=0;i<n;i++)
	{
		s = new LinkNode;
		in>>s->data;
		if(!head)
			head = p = s;
		else
			{
				p->next = s;
				s->prior = p;
		}
		p = s;
	}
	p->next = head;
	head->prior = p;
	cout<<"\n\t�Ѿ��ڵ�ǰѭ��˫����������"<<n<<"�����"<<endl<<endl;
	cout<<"�����ѭ��˫��������:"<<endl;
	
}
//����>>
template <typename ElemType>
istream& operator>>(istream& in,MyDoubleLinkList<ElemType>& link)
{
	link.read(in);
	return in;
}
//���display
template <typename ElemType>
void MyDoubleLinkList<ElemType>::display(ostream& out)
{
	out<<"    ";
	int n=getLength();
	if(!n)
	{
		out<<endl<<endl<<endl<<endl<<endl;
		return;
	}
	for(int i=1;i<=n;i++)
		if(i==1)
			cout<<"----";
		else
		    out<<"-----";
	out<<endl;
	for(int i=1;i<=n;i++)
		if(i==1)
			cout<<"    \31  ";
		else
			out<<"     ";
	out<<"|"<<endl;
	NodePointer p = head;
	cout<<" - ";
	while(p)
	{
		out<<setw(2)<<p->data<<"-> ";
		p = p->next;
		if(p==head)
			break;
	}
	out<<endl<<"|    ";
	for(int i=1;i<n;i++)
	{
		out<<"\30__| ";
		if(i==n-1)
			out<<"\30"<<endl;
	}
	for(int i=1;i<=n;i++)
		if(i==1)
			cout<<"|____";
		else if(i==n)
		    out<<"_____|";
		else
			out<<"_____";
	cout<<endl<<endl;
}
//����<<�����
template <typename ElemType>
ostream& operator<<(ostream& out,MyDoubleLinkList<ElemType>& link)
{
	link.display(out);
	return out;
}
template <typename ElemType>
void MyDoubleLinkList<ElemType>::randCreate()
{
	if(head)
		clear();
	srand((unsigned)time(NULL));
	int n = rand()%6+5;
	NodePointer p,s;
	for(int i=1;i<=n;i++)
	{
		s = new LinkNode;
		assert(s!=0);
		s->data=rand()%100;
		if(!head)
			head=p=s;
		else
		{
			p->next=s;
			s->prior=p;
			p=s;
		}
	}
	head->prior=p;
	p->next=head;
}