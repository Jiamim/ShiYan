#include<iostream>
using namespace std;
#ifndef EX_3_4_TEST_H
#define EX_3_4_TEST_H
#include "ex_3_4_Test.h"
#endif
void (*test[])(MyDoubleLinkList<int>&,char& continueYesNo)={ex3_4_1,ex3_4_2,ex3_4_3,ex3_4_4,ex3_4_5,
															ex3_4_6,ex3_4_7,ex3_4_8,ex3_4_9,ex3_4_10,
															ex3_4_11,ex3_4_12,ex3_4_13};
void main()
{
	MyDoubleLinkList<int> link;
	link.randCreate();
	int choose;
	char continueYesNo = 'N';
	while(1)
	{
		choose = 0;
		system("cls");
		cout<<endl;

		cout<<"    *************�� �� ѭ �� ˫ �� �� �� �� ��************"<<endl<<endl;
		cout<<"\t 1.ȡѭ��������ĵ�i�����������"<<endl;
		cout<<"\t 2.�ڵ�i�����֮ǰ����һ��������Ϊe�Ľ��"<<endl;
		cout<<"\t 3.�ж�ѭ���������Ƿ�Ϊ��"<<endl;
		cout<<"\t 4.��ѭ���������н��ĸ���"<<endl;
		cout<<"\t 5.����ѭ��˫������������Ϊe�ĵ�һ������ָ��"<<endl;
		cout<<"\t 6.����ĳ���ǰ����������"<<endl;
		cout<<"\t 7.����ĳ����̵�������"<<endl;
		cout<<"\t 8.ɾ��ѭ����������������Ϊe�ĵ�һ�����"<<endl;
		cout<<"\t 9.��һ��ѭ��������ֵ����һ����ѭ��������"<<endl;
		cout<<"\t10.��ѭ����������ÿ�"<<endl;
		cout<<"      ��11.������ɷ�ѭ��������"<<endl;
		cout<<"      ��12.�����еķ�ѭ���������ʼ����һ����ѭ��������"<<endl;
		cout<<"      ��13.�����ѭ��������"<<endl;
		cout<<" \t����������"<<endl<<endl;
		cout<<"    ////////////////////////////////////////////////////"<<endl;
		displayCurrentObject(link);
		cout<<"    ////////////////////////////////////////////////////"<<endl;
		cout<<"ѡ����Ҫ�����Ĵ��루1-13��:";
		cin>>choose;
		if(choose>0&&choose<14)
		{
			system("cls");
			displayCurrentObject(link);
			test[choose-1](link,continueYesNo);
		}
		else
			return;
		
		if(continueYesNo=='N'||continueYesNo=='n')
			break;
	}
}
