#ifndef EX4_1_TEST_H
#define EX4_1_TEST_H
#endif
#include "MySqStack.h"
////////////////////////////////////////
template <class T>
void displayCurrentObject(MySqStack<T> ms)
{
	cout<<"��ǰ˳��ջ�е�Ԫ��Ϊ��"<<endl;
	cout<<ms;
}
///////////////////////////////////////
template <class T>
void ex4_1_1(MySqStack<T>& ss,char& continueYesNo)
{
	cout<<" ***************��ջ��ѹ��Ԫ��e*************"<<endl<<endl;
	T e;
	cout<<"��������Ҫ��ջ��ѹ���Ԫ�أ�";
	cin>>e;
	ss.push(e);
	cout<<"ѹ��Ԫ��"<<e<<"����˳��ջ������ʾ��"<<endl;
	cout<<ss;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <class T>
void ex4_1_2(MySqStack<T>& ss,char& continueYesNo)
{
	cout<<" ***************����ջ��Ԫ�ص�e*************"<<endl<<endl;
	T e;
		if(ss.pop(e)==ERROR)
	{
		cout<<"��ջ��,���ܳ�ջ"<<endl;
		return;
	}
	cout<<"������ջ��Ԫ��Ϊ��"<<e<<endl;
	cout<<"������˳��ջ�е�Ԫ��Ϊ��"<<endl;
	cout<<ss;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <class T>
void ex4_1_3(MySqStack<T>& ss,char& continueYesNo)
{
	cout<<" ***************��ջ��Ԫ��*************"<<endl<<endl;
	T e;
	if(ss.getTop(e)==ERROR)
	{
		cout<<"��ջ�գ���ջ��Ԫ��"<<endl;
		return;
	}
	cout<<"��ջ��Ԫ��Ϊ��"<<e<<endl;
	cout<<"��ջ��Ԫ�غ�˳��ջ�е�Ԫ��Ϊ��"<<endl;
	cout<<ss;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <class T>
void ex4_1_4(MySqStack<T>& ss,char& continueYesNo)
{
	cout<<" ***************�ж�˳��ջ�Ƿ�Ϊ��*************"<<endl<<endl;
	if(ss.isEmpty())
		cout<<"��ǰջΪ��"<<endl;
	else
		cout<<"��ǰջ��Ϊ��"<<endl;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <class T>
void ex4_1_5(MySqStack<T>& ss,char& continueYesNo)
{
	cout<<" ***************��˳��ջ��Ԫ�صĸ���*************"<<endl<<endl;
	cout<<"��ǰ˳��ջ��Ԫ�صĸ���Ϊ"<<ss.getLength()<<endl;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <class T>
void ex4_1_6(MySqStack<T>& ss,char& continueYesNo)
{
	cout<<" ***************��һ��˳��ջ��ֵ����һ��˳��ջ*************"<<endl<<endl;
	MySqStack<int> t;
	t.randomCreate();
	ss=t;
	cout<<"��һ��˳��ջ��ֵ����ǰ˳��ջΪ��"<<endl;
	cout<<ss;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <class T>
void ex4_1_7(MySqStack<T>& ss,char& continueYesNo)
{
	cout<<" ***************��˳��ջ�ÿ�*************"<<endl<<endl;
	ss.clear();
	cout<<"��ǰ˳��ջ�ÿպ�Ԫ�صĸ���Ϊ"<<ss.getLength()<<endl;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <class T>
void ex4_1_8(MySqStack<T>& ss,char& continueYesNo)
{
	cout<<" ***************�������˳��ջ*************"<<endl<<endl;
	cout<<"������ɵ�˳��վ�е�һЩԪ�����£�"<<endl;
	ss.randomCreate();
	cout<<endl<<"������ɵ�˳��ջ������˳��洢�����£�"<<endl;
	cout<<ss;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <class T>
void ex4_1_9(MySqStack<T>& ss,char& continueYesNo)
{
	cout<<" ************������˳��ջ��ʼ����һ����˳��ջ************"<<endl<<endl;
	MySqStack<T> t(ss);
	cout<<"��ǰ˳��ջ��ʼ����һ˳��ջΪ��"<<endl;
	cout<<t;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
