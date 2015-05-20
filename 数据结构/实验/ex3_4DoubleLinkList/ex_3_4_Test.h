#ifndef MYDOUBLELINKLIST_H
#define MYDOUBLELINKLIST_H
#include "e:\wangwei\Test Include\MyDoubleLinkList.h"

#endif
template <typename ElemType>
void displayCurrentObject(MyDoubleLinkList<ElemType>& dll)
{
	cout<<"��ǰѭ��˫����Ϊ��"<<endl<<endl;
	cout<<dll;
}
template <typename ElemType>
void ex3_4_1(MyDoubleLinkList<ElemType>& link,char& continueYesNo)
{
	int i;
	ElemType e;
	cout<<"************\4ȡѭ��˫����ĵ�i�����\4************"<<endl<<endl;
	cout<<"��������Ҫȡ�Ľ�����ţ�";
	cin>>i;
	if(link.getElem(i,e)==ERROR)
		cout<<"����!��������û�е�"<<i<<"�Ľ��"<<endl;
	else
	    cout<<"��Ҫȡ��ѭ��������ĵ�"<<i<<"������������Ϊ"<<e<<endl<<endl;

	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <typename ElemType>
void ex3_4_2(MyDoubleLinkList<ElemType>& link,char& continueYesNo)
{
	int i;
	ElemType e;
	cout<<"**********\4�ڵ�i�����֮ǰ����һ��������Ϊe�Ľ��\4*********"<<endl<<endl;
	cout<<"��������Ҫ����֮ǰ���������ţ�";
	cin>>i;
	cout<<"��������Ҫ�������������";
	cin>>e;
	if(link.insert(i,e)==ERROR)
		cout<<"����!��������û�е�"<<i<<"�Ľ��"<<endl;
	else
	{
		cout<<endl<<"���Ѿ��ڵ�"<<i<<"�����֮ǰ����������Ϊ"<<e<<"�Ľ��"<<endl;
		cout<<link;
	}
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <typename ElemType>
void ex3_4_3(MyDoubleLinkList<ElemType>& link,char& continueYesNo)
{
	cout<<"************\4�ж�ѭ��˫�����Ƿ�Ϊ��\4************"<<endl<<endl;
	printf("��ǰѭ��˫��������%s\n",link.isEmpty()?"Ϊ��":"��Ϊ��");
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <typename ElemType>
void ex3_4_4(MyDoubleLinkList<ElemType>& link,char& continueYesNo)
{
	cout<<"************\4��ѭ��˫�����н��ĸ���\4************"<<endl<<endl;
	cout<<"��ѭ���������н��ĸ���Ϊ��"<<link.getLength()<<endl;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <typename ElemType>
void ex3_4_5(MyDoubleLinkList<ElemType>& link,char& continueYesNo)
{
		cout<<"************\4����ѭ��˫������������Ϊe�ĵ�һ������ָ��\4************"<<endl<<endl;
		ElemType e;
		cout<<"\t����������Ҫ���ҽ���������Ϊ��";
		cin>>e;
		DoubleLinkList<ElemType>::NodePointer r;
		if(link.locateElem(e,r)==ERROR)
		cout<<"��������û��������Ϊ"<<e<<"�Ľ��"<<endl;
		else
			cout<<"������ҵ�һ�����������"<<e<<"�Ľ���������Ϊ"<<r->data<<endl;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <typename ElemType>
void ex3_4_6(MyDoubleLinkList<ElemType>& link,char& continueYesNo)
{
	ElemType e,prior_e;
	cout<<"************\4����ĳ���ǰ����������\4************"<<endl<<endl;
	cout<<"������������ҽ���������";
	cin>>e;
	if(link.priorElem(e,prior_e)==ERROR)
		cout<<"���󣡸��������޴˽����߸ý��Ϊͷ���"<<endl;
	else
		cout<<"�������"<<e<<"ǰ����������Ϊ"<<prior_e<<endl<<endl;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <typename ElemType>
void ex3_4_7(MyDoubleLinkList<ElemType>& link,char& continueYesNo)
{
	ElemType e,next_e;
	cout<<"************\4����ĳ����̵�������\4************"<<endl<<endl;
	cout<<"������������ҽ���������";
	cin>>e;
	if(link.nextElem(e,next_e)==ERROR)
		cout<<"���󣡸��������޴˽����߸ý��Ϊβ���"<<endl;
	else
		cout<<"�������"<<e<<"��̵�������Ϊ"<<next_e<<endl<<endl;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <typename ElemType>
void ex3_4_8(MyDoubleLinkList<ElemType>& link,char& continueYesNo)
{
		ElemType e;
	cout<<"*********\4ɾ��ѭ˫��������������Ϊe�ĵ�һ�����\4********"<<endl;
	cout<<"����������ɾ������������";
	cin>>e;
	if(link.deleteElem(e)==ERROR)
		cout<<"����!���������޴˽��"<<endl;
	else
	{
		cout<<endl<<"ɾ����ѭ��˫����Ϊ"<<endl;
		cout<<link;
	}
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <typename ElemType>
void ex3_4_9(MyDoubleLinkList<ElemType>& link,char& continueYesNo)
{
	cout<<"*********\4��һ��ѭ��˫����ֵ����һ��ѭ��˫����\4**********"<<endl;
	MyDoubleLinkList<int> otherL;
	otherL.randCreate();
	link=otherL;
	cout<<endl<<"��һ��ѭ��˫����ֵ����ǰѭ��˫����Ϊ��"<<endl;
	cout<<link;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <typename ElemType>
void ex3_4_10(MyDoubleLinkList<ElemType>& link,char& continueYesNo)
{
	cout<<"*************\4��ѭ��˫�����ÿ�\4*****************"<<endl;
	link.clear();
	cout<<endl<<"��ǰ��ѭ���������ÿպ�����Ԫ�صĸ���Ϊ��"<<link.getLength()<<endl<<endl;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <typename ElemType>
void ex3_4_11(MyDoubleLinkList<ElemType>& link,char& continueYesNo)
{
	cout<<"**************\4�������ѭ˫����\4****************"<<endl<<endl;
	link.randCreate();

	cout<<"������ɵ�ѭ��˫����Ϊ��"<<endl;
	cout<<link;
	cout<<endl;
	cout<<" **************************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <typename ElemType>
void ex3_4_12(MyDoubleLinkList<ElemType>& link,char& continueYesNo)
{
	cout<<"**************\4�����е�ѭ��˫�����ʼ����һ��ѭ��˫����\4****************"<<endl<<endl;
	MyDoubleLinkList<ElemType> otherL(link);
	
	cout<<"��ʼ�������һ����ѭ��������Ϊ��"<<endl;
	cout<<otherL;
	cout<<endl;
	cout<<" **************************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <typename ElemType>
void ex3_4_13(MyDoubleLinkList<ElemType>& link,char& continueYesNo)
{
		cout<<"*********************\4����ѭ��˫����\4*************************"<<endl<<endl;
	link.clear();
	cin>>link;
	cout<<"�������ѭ��˫����Ϊ��"<<endl;
	cout<<link;
	cout<<endl;
	cout<<" **************************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}