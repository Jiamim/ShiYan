#include <iostream>
using namespace std;
#include "ex4_1_Test.h"

void (*test[])(MySqStack<int>&,char& continueYesNo)={ex4_1_1,ex4_1_2,ex4_1_3,ex4_1_4,ex4_1_5,
														ex4_1_6,ex4_1_7,ex4_1_8,ex4_1_9};
void main()
{
	MySqStack<int> ss;
	int choose;
	char continueYesNo = 'N';
	ss.randomCreate();
	while(1)
	{
		choose = 0;
		system("cls");
		cout<<endl;
		cout<<"    **************����˳��ջ�Ĳ���****************"<<endl<<endl;
		cout<<"\t 1.��ջ��ѹ��Ԫ��e"<<endl;
		cout<<"\t 2.����ջ��Ԫ�ص�e"<<endl;
		cout<<"\t 3.��ջ����Ԫ��e"<<endl;
		cout<<"\t 4.�ж�˳��ջ�Ƿ�Ϊ��"<<endl;
		cout<<"\t 5.��˳��ջ��Ԫ�صĸ���"<<endl;
		cout<<"\t 6.��һ��˳��ջ��ֵ����һ��˳��ջ"<<endl;
		cout<<"\t 7.��˳��ջ�ÿ�"<<endl;
		cout<<"       ��8.�������˳��ջ"<<endl;
		cout<<"       ��9.������˳��ջ��ʼ����һ����˳��ջ"<<endl;
		cout<<"\t����������"<<endl<<endl;
		cout<<"    ////////////////////////////////////////////////////"<<endl;
		displayCurrentObject(ss);
		cout<<"    ////////////////////////////////////////////////////"<<endl;
		cout<<"ѡ����Ҫ�����Ĵ��루1-9��:";
		cin>>choose;
		if(choose>0&&choose<10)
		{
			system("cls");
			displayCurrentObject(ss);
		}
		else
			return;
		test[choose-1](ss,continueYesNo);
		if(continueYesNo=='N'||continueYesNo=='n')
			break;
	}
}