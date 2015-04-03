/////////////////////////////////////////////////
//MyLinkList.h˳������ݽṹC++�ඨ�壨�����ࣩ
/////////////////////////////////////////////////
#ifndef SQLIST_H
	#define SQLIST_H
	#include "e:\wangwei\Include\LinkList.h"
#endif
#include <iomanip>
template <typename ElemType>
class MyLinkList:public LinkList<ElemType>
{
public:
	void read(istream& in);
	void display(ostream& out)const;
	void randCreate();
	//
	/*void dele(NodePointer p);*/
};
template <typename ElemType>
void MyLinkList<ElemType>::read(istream& in)
{
	int n;
	cout<<"������Ҫ����Ľ��ĸ�����";
	cin>>n;
	NodePointer p;
	for(int i=1;i<=n;i++)
	{
		if(i==1)
		{
			head = new LinkNode();
			assert(head!=0);
			cin>>head->data;
			p=head;
			continue;
		}
		NodePointer s = new LinkNode();
		assert(s!=0);
		cin>>s->data;
		p->next=s;
		p=s;
	}
}
template <typename ElemType>
void MyLinkList<ElemType>::display(ostream& out)const
{
	NodePointer p = head;
	int i=1;
	while(p)
	{
		cout<<"["<<setw(2)<<i++<<"] ";
		p = p->next;
	}
	cout<<endl;
	p = head;
	while(p)
	{
		cout<<setw(3)<<p->data;
		if(p->next)
			cout<<"->";
		else
			cout<<"/\\";
		p = p->next;
	}
	cout<<endl;
}
//����>>����
template <typename ElemType>
istream& operator>>(istream& in,MyLinkList<ElemType>& link)
{
	link.read(in);
	return in;
}
//����<<����
template <typename ElemType>
ostream& operator<<(ostream& out,const MyLinkList<ElemType>& link)
{
	link.display(out);
	return out;
}
//���
template <typename ElemType>
void MyLinkList<ElemType>::randCreate()
{		
	NodePointer p,s;
	p = head;
	if(head)
		clear();
	srand((unsigned)time(NULL));
	int n = rand()%10+1;
	int data[10];
	cout<<"�����µ���������ɵķ�ѭ��������"<<endl;
	for(int i=0;i<n;i++)
	{
		data[i]=rand()%100;
		cout<<data[i]<<" ";
	}
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
		s = new LinkNode;
		s->data = data[i-1];
		if(!head)
			head = s;
		else
			p->next = s;
		p = s;
	}
	p->next=0;
}
//�ݹ���սڵ�
//template <typename ElemType>
//void MyLinkList<ElemType>::dele(NodePointer p)
//{
//	if(!p)
//		return;
//	NodePointer s = p;
//	if(p->next)
//	{
//		p = p->next;
//		dele(p);
//	}	
//	cout<<s->data<<" ";
//	delete s;
//}