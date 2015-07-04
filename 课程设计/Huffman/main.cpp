#include <iostream>
#include "HuffmanCodec.h"
using namespace std;

void menu()
{
	cout<<endl;
	cout<<"============================================="<<endl;
	cout<<"       ��ѡ��Ҫ���еĲ���"<<endl;
	cout<<"                 C: ����"<<endl;
	cout<<"                 D: ����"<<endl;
	cout<<"                 P: ��ӡ�����ļ�"<<endl;
	cout<<"                 T: ��ӡ��������"<<endl;
	cout<<"              ����: �˳�����"<<endl;
	cout<<"============================================="<<endl;
	cout<<endl;
}
int main()
{
	bool flag = true;
	HuffmanCodec hf;
	char input;
	while(flag)
	{
		menu();
		cin>>input;
		switch (input)
		{
		case 'C':
		case 'c':
			hf.coding();
			break;
		case 'D':
		case 'd':
			hf.decoding();
			break;
		case 'P':
		case 'p':
			hf.print();
			break;
		case 'T':
		case 't':
			hf.treePrint();
			break;
		default:
			flag = false;
		}
	}
}