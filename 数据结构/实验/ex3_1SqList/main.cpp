#include <iostream>
using namespace std;
#ifndef MYSQLIST_H
#define MYSQLIST_H
#include "e:\wangwei\Test Include\MySqList.h"
#endif
#ifndef EX3_1_TEST_H
#define EX3_1_TEST_H
#include "e:\wangwei\ex3_1SqList\ex3_1_Test.h"
#endif
void main()
{
	MySqList<int> sq;
	int choose;
	char continueYesNo = 'N';
	sq.randCreate();
	while(1)
	{
		choose = 0;
		system("cls");
		cout<<endl;

		cout<<"    *********\4�� �� ˳ �� �� �� �� ��\4*********"<<endl<<endl;
		cout<<"\t 1.�ڵ�i��Ԫ��֮ǰ����һ��Ԫ��"<<endl;
		cout<<"\t 2.�ж�˳����Ƿ�Ϊ��"<<endl;
		cout<<"\t 3.��˳�����Ԫ�صĸ���"<<endl;
		cout<<"\t 4.ȡ��i��Ԫ��"<<endl;
		cout<<"\t 5.���ҵ�1����ĳԪ������compare()��ϵ�����"<<endl;
		cout<<"\t 6.����ĳԪ�ص�ǰ��"<<endl;
		cout<<"\t 7.����ĳԪ�صĺ��"<<endl;
		cout<<"\t 8.ɾ����i��Ԫ��"<<endl;
		cout<<"\t 9.��һ��˳���ֵ����һ��˳���"<<endl;
		cout<<"\t10.��˳����ÿ�"<<endl;
		cout<<"\t11.�������˳���Ԫ��ֵΪ0��99֮���������"<<endl;
		cout<<"\t12.�����е�˳����ʼ����һ��˳���"<<endl;
		cout<<"\t13.����˳���"<<endl;
		cout<<"\t14.����˳���Ĳ���������"<<endl;
		cout<<" \t����������"<<endl<<endl;
		cout<<"////////////////////////////////////"<<endl;
		displayCurrentObject(sq);
		cout<<"////////////////////////////////////"<<endl;
		cout<<"    ��ѡ����Ҫ�����Ĵ��루1 -14������:";
		cin>>choose;
		if(choose>0&&choose<15)
		{
			system("cls");
			displayCurrentObject(sq);
		}
		switch(choose)
		{
		case 1:ex3_1_1(sq,continueYesNo);break;
		case 2:ex3_1_2(sq,continueYesNo);break;
		case 3:ex3_1_3(sq,continueYesNo);break;
		case 4:ex3_1_4(sq,continueYesNo);break;
		case 5:ex3_1_5(sq,continueYesNo);break;
		case 6:ex3_1_6(sq,continueYesNo);break;
		case 7:ex3_1_7(sq,continueYesNo);break;
		case 8:ex3_1_8(sq,continueYesNo);break;
		case 9:ex3_1_9(sq,continueYesNo);break;
		case 10:ex3_1_10(sq,continueYesNo);break;
		case 11:ex3_1_11(sq,continueYesNo);break;
		case 12:ex3_1_12(sq,continueYesNo);break;
		case 13:ex3_1_13(sq,continueYesNo);break;
		case 14:ex3_1_14(sq,continueYesNo);break;
		default:    cout<<"\n  ��ѡ���˽���"<<endl<<endl;
			return;
		}
		if(continueYesNo=='N'||continueYesNo=='n')
			break;
	}
}