#include <iostream>
using namespace std;
#include "ex5_1_Test.h"
void (*test[])(MySqQueue<int>&,char& continueYesNo)={ex5_1_1,ex5_1_2,ex5_1_3,ex5_1_4,ex5_1_5,
														ex5_1_6,ex5_1_7,ex5_1_8,ex5_1_9,ex5_1_10};
void main()
{
	MySqQueue<int> ss;
	int choose;
	char continueYesNo = 'N';
	ss.randomCreate();
	while(1)
	{
		choose = 0;
		system("cls");
		cout<<endl;
		cout<<"    **************����ѭ��˳����еĲ���****************"<<endl<<endl;
		cout<<"\t 1.������(��ѭ��˳����ж�β����Ԫ��)"<<endl;
		cout<<"\t 2.������(ɾ��ѭ��˳����ж�ͷԪ��)"<<endl;
		cout<<"\t 3.��ѭ��˳����ж�ͷ��Ԫ�ص�e"<<endl;
		cout<<"\t 4.�ж�ѭ��˳������Ƿ�Ϊ��"<<endl;
		cout<<"\t 5.�ж�ѭ��˳������Ƿ���"<<endl;
		cout<<"\t 6.��ѭ��˳�������Ԫ�صĸ���"<<endl;
		cout<<"\t 7.��һ��ѭ��˳����и�ֵ����һ��ѭ��˳�����"<<endl;
		cout<<"      �� 8.��ѭ��˳������ÿ�"<<endl;
		cout<<"      �� 9.�������ѭ��˳�����"<<endl;
		cout<<"      ��10.������ѭ��˳����г�ʼ����һ����ѭ��˳�����"<<endl;
		cout<<"\t����������"<<endl<<endl;
		cout<<"    ////////////////////////////////////////////////////"<<endl;
		displayCurrentObject(ss);
		cout<<"    ////////////////////////////////////////////////////"<<endl;
		cout<<"ѡ����Ҫ�����Ĵ��루1-10��:";
		cin>>choose;
		if(choose>0&&choose<11)
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