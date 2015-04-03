#ifndef EX5_1_TEST_H
#define EX5_1_TEST_H
#endif
#include "MySqQueue.h"
////////////////////////////////////////
template <class T>
void displayCurrentObject(MySqQueue<T>& ms)
{
	cout<<"��ǰ˳��ջ�е�Ԫ��Ϊ��"<<endl;
	cout<<ms;
}
///////////////////////////////////////
template <class T>
void ex5_1_1(MySqQueue<T>& ss,char& continueYesNo)
{
	cout<<" ***************�ڶ��ײ���Ԫ��e*************"<<endl<<endl;
	T e;
	cout<<"��������Ҫ�ڶ��ײ����Ԫ�أ�";
	cin>>e;
	if(ss.enQueue(e)==ERROR)
	{
		cout<<"������"<<endl;
		return;
	}
	cout<<"����Ԫ��"<<e<<"����˳�����������ʾ��"<<endl;
	cout<<ss;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <class T>
void ex5_1_2(MySqQueue<T>& ss,char& continueYesNo)
{
	cout<<" ***************������βԪ�ص�e*************"<<endl<<endl;
	T e;
		if(ss.deQueue(e)==ERROR)
	{
		cout<<"��ջ��,���ܳ�����"<<endl;
		return;
	}
	cout<<"�����Ķ�βԪ��Ϊ��"<<e<<endl;
	cout<<"������˳������е�Ԫ��Ϊ��"<<endl;
	cout<<ss;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <class T>
void ex5_1_3(MySqQueue<T>& ss,char& continueYesNo)
{
	cout<<" ***************������Ԫ��*************"<<endl<<endl;
	T e;
	if(ss.getFront(e)==ERROR)
	{
		cout<<"���ӿգ��޶���Ԫ��"<<endl;
		return;
	}
	cout<<"������Ԫ��Ϊ��"<<e<<endl;
	cout<<"������Ԫ�غ�˳������е�Ԫ��Ϊ��"<<endl;
	cout<<ss;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <class T>
void ex5_1_4(MySqQueue<T>& ss,char& continueYesNo)
{
	cout<<" ***************�ж�˳������Ƿ�Ϊ��*************"<<endl<<endl;
	if(ss.isEmpty())
		cout<<"��ǰ����Ϊ��"<<endl;
	else
		cout<<"��ǰ���в�Ϊ��"<<endl;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}

/////////////////////////////////////
template <class T>
void ex5_1_5(MySqQueue<T>& ss,char& continueYesNo)
{
	cout<<" ***************�ж�ѭ�������Ƿ���*************"<<endl<<endl;
	if(ss.isFull())
		cout<<"ѭ����������"<<endl;
	else
		cout<<"ѭ������û��"<<endl;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <class T>
void ex5_1_6(MySqQueue<T>& ss,char& continueYesNo)
{
	cout<<" ***************��˳�������Ԫ�صĸ���*************"<<endl<<endl;
	cout<<"��ǰ˳�������Ԫ�صĸ���Ϊ"<<ss.getLength()<<endl;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <class T>
void ex5_1_7(MySqQueue<T>& ss,char& continueYesNo)
{
		cout<<" ***************��һ��˳����и�ֵ����һ��˳�����*************"<<endl<<endl;
	MySqQueue<int> t;
	t.randomCreate();
	ss=t;
	cout<<"��һ��˳����и�ֵ����ǰ˳�����Ϊ��"<<endl;
	cout<<ss;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <class T>
void ex5_1_8(MySqQueue<T>& ss,char& continueYesNo)
{
	cout<<" ***************��˳������ÿ�*************"<<endl<<endl;
	ss.clear();
	cout<<"��ǰ˳������ÿպ�Ԫ�صĸ���Ϊ"<<ss.getLength()<<endl;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <class T>
void ex5_1_9(MySqQueue<T>& ss,char& continueYesNo)
{
	cout<<" ***************�������˳�����*************"<<endl<<endl;
	cout<<"������ɵ�˳��վ�е�һЩԪ�����£�"<<endl;
	ss.randomCreate();
	cout<<endl<<"������ɵ�˳��ջ������˳��洢�����£�"<<endl;
	cout<<ss;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <class T>
void ex5_1_10(MySqQueue<T>& ss,char& continueYesNo)
{
	cout<<" ************������˳����г�ʼ����һ����˳�����************"<<endl<<endl;
	MySqQueue<T> t(ss);
	cout<<"��ǰ˳����г�ʼ����һ˳�����Ϊ��"<<endl;
	cout<<t;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}