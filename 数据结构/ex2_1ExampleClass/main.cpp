#include <iostream>
using namespace std;
#ifndef MYEXAMPLECLASS_H
#define MYEXAMPLECLASS_H
#include "E:\wangwei\Test Include\MyExampleClass.h"
#endif
#ifndef EX2_1_TEST_H
#define EX2_1_TEST_H
#include "E:\wangwei\ex2_1ExampleClass\ex2_1_Test.h"
#endif
void main()
{
	MyRectangle<float> rec;
	int choose;
	char continueYesNo = 'N';
	while(1)
	{
		choose = 0;
		system("cls");
		cout<<endl;
		
		cout<<"    *********���Գ����εĲ���*********"<<endl<<endl;
		cout<<"\t 1.���ó����ε����"<<endl;
		cout<<"\t 2.���ó����εĳ�"<<endl;
		cout<<"\t 3.���ظ�ֵ������Ķ���"<<endl;
		cout<<"\t 4.���ó����εĿ�"<<endl;
		cout<<"\t 5.�󳤷������"<<endl;
		cout<<"    ����������"<<endl<<endl;
		cout<<"////////////////////////////////////"<<endl;
		displayCurrentObject(rec);
		cout<<"////////////////////////////////////"<<endl;
		cout<<"    ��ѡ����Ҫ�����Ĵ��루1 -5������:";
		cin>>choose;
		if(choose>0&&choose<6)
		{
			system("cls");
			displayCurrentObject(rec);
		}
		switch(choose)
		{
		case 1:ex2_1_1(rec,continueYesNo);break;
		case 2:ex2_1_2(rec,continueYesNo);break;
		case 3:ex2_1_3(rec,continueYesNo);break;
		case 4:ex2_1_4(rec,continueYesNo);break;
		case 5:ex2_1_5(rec,continueYesNo);break;
		default:    cout<<"\n  ��ѡ���˽���"<<endl<<endl;
			return;
		}
		if(continueYesNo=='N'||continueYesNo=='n')
			break;
	}
}