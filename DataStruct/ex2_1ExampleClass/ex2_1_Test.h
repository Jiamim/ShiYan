//#include "E:\wangwei\Test Include\MyExampleClass.h"
//��ʾ������
template <typename ElemType>
void displayCurrentObject(MyRectangle<ElemType> rec)
{
	cout<<endl;
	cout<<rec;
}
//����ex2_1_1:���ó����ε����
template <typename ElemType>
void ex2_1_1(MyRectangle<ElemType>& rec,char& continueYesNo)
{
	int no;
	cout<<" ************���ó����ε����************"<<endl<<endl;
	cout<<"    �����뵱ǰ�����ζ�������: ";
	cin>>no;
	rec.setNo(no);
	cout<<rec;

	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//���ԣ����ó����εĳ�
template <typename ElemType>
void ex2_1_2(MyRectangle<ElemType>& rec,char& continueYesNo)
{
	float aL;
	cout<<" **************���ó����εĳ�**************"<<endl<<endl;
	cout<<" �����뵱ǰ�����ζ���ĳ�:";
	cin>>aL;
	rec.setLength(aL);
	cout<<rec;

	cout<<" *****************************************"<<endl<<endl;
	cout<<" ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//�����ζ���ĸ�ֵ
template <typename ElemType>
void ex2_1_3(MyRectangle<ElemType>rec,char& continueYesNo)
{
	MyRectangle<float> recOther;
	cout<<" ************�����ζ���ĸ�ֵ****************"<<endl<<endl;
	cout<<"    �ѵ�ǰ�����ζ���ֵ����һ�������ζ���"<<endl;
	recOther = rec;
	cout<<"\n    ��ֵ����һ�������ζ���Ϊ: "<<endl;
	cout<<recOther;
	cout<<" *****************************************"<<endl<<endl;
	cout<<" ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//���ԣ����ó����εĿ�
template <typename ElemType>
void ex2_1_4(MyRectangle<ElemType>& rec,char& continueYesNo)
{
	float aL;
	cout<<" **************���ó����εĿ�**************"<<endl<<endl;
	cout<<" �����뵱ǰ�����ζ���Ŀ�:";
	cin>>aL;
	rec.setWidth(aL);
	cout<<rec;

	cout<<" *****************************************"<<endl<<endl;
	cout<<" ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//���ԣ��󳤷��ε����
template <typename ElemType>
void ex2_1_5(MyRectangle<ElemType>& rec,char& continueYesNo)
{
	cout<<" **************�����ε����**************"<<endl<<endl;
	cout<<rec.area()<<endl;

	cout<<" *****************************************"<<endl<<endl;
	cout<<" ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
