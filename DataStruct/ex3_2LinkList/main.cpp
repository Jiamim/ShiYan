#include <iostream>
using namespace std;
#ifndef MYLINKLIST_H
#define MYLINKLIST_H
#include "e:\wangwei\Test Include\MyLinkList.h"
#endif
#ifndef EX3_2_TEST_H
#define EX3_2_TEST_H
#include "ex3_2_Test.h"
#endif

void main()
{
	MyLinkList<int> link;
	link.randCreate();
	int choose;
	char continueYesNo = 'N';
	while(1)
	{
		choose = 0;
		system("cls");
		cout<<endl;

		cout<<"    **********�� �� �� ѭ �� �� �� �� �� �� ��*********"<<endl<<endl;
		cout<<"\t 1.ȡ��ѭ��������ĵ�i�����"<<endl;
		cout<<"\t 2.�ڵ�i�����֮ǰ����һ��������Ϊe�Ľ��"<<endl;
		cout<<"\t 3.�жϷ�ѭ���������Ƿ�Ϊ��"<<endl;
		cout<<"\t 4.���ѭ���������н��ĸ���"<<endl;
		cout<<"\t 5.���ҵ�1����e����compare()��ϵ�Ľ��"<<endl;
		cout<<"\t 6.����ĳ���ǰ����������"<<endl;
		cout<<"\t 7.����ĳ����̵�������"<<endl;
		cout<<"\t 8.ɾ����ѭ����������������Ϊe�ĵ�һ�����"<<endl;
		cout<<"\t 9.ɾ����ѭ���������ظ�ֵ"<<endl;
		cout<<"\t10.��ѭ�������������"<<endl;
		cout<<"\t11.��һ����ѭ��������ֵ����һ����ѭ��������"<<endl;
		cout<<"\t12.��һ����ѭ���������ÿ�"<<endl;
		cout<<"\t13.������ɷ�ѭ��������"<<endl;
		cout<<"\t14.�����еķ�ѭ���������ʼ����һ����ѭ��������"<<endl;
		cout<<"\t15.�����ѭ��������"<<endl;
		cout<<" \t����������"<<endl<<endl;
		cout<<"    ////////////////////////////////////////////////////"<<endl;
		displayCurrentObject(link);
		cout<<"    ////////////////////////////////////////////////////"<<endl;
		cout<<"ѡ����Ҫ�����Ĵ��루1-15��:";
		cin>>choose;
		if(choose>0&&choose<16)
		{
			system("cls");
			displayCurrentObject(link);
		}
		switch(choose)
		{
		case 1:ex3_2_1(link,continueYesNo);break;
		case 2:ex3_2_2(link,continueYesNo);break;
		case 3:ex3_2_3(link,continueYesNo);break;
		case 4:ex3_2_4(link,continueYesNo);break;
		case 5:ex3_2_5(link,continueYesNo);break;
		case 6:ex3_2_6(link,continueYesNo);break;
		case 7:ex3_2_7(link,continueYesNo);break;
		case 8:ex3_2_8(link,continueYesNo);break;
		case 9:ex3_2_9(link,continueYesNo);break;
		case 10:ex3_2_10(link,continueYesNo);break;
		case 11:ex3_2_11(link,continueYesNo);break;
		case 12:ex3_2_12(link,continueYesNo);break;
		case 13:ex3_2_13(link,continueYesNo);break;
		case 14:ex3_2_14(link,continueYesNo);break;
		case 15:ex3_2_15(link,continueYesNo);break;
		default:    cout<<"\n  ��ѡ���˽���"<<endl<<endl;
			return;
		}
		if(continueYesNo=='N'||continueYesNo=='n')
			break;
	}
}