/////////////////////////////////////////////////
//MyExampleClass.h���������ݽṹC++�ඨ�壨�����ࣩ
/////////////////////////////////////////////////
#ifndef EXAMPLECLASS_H
	#define EXAMPLECLASS_H
	#include "E:\wangwei\Include\ExampleClass.h"
#endif
//���������ݽṹC++�������������ࣩ
template <typename ElemType>
class MyRectangle:public Rectangle<ElemType>
{
public:
	void read(istream& in);
	void display(ostream& out)const;
};
/*
ʵ�ֲ���
*/
//���ܣ����볤���ε���Ϣ
template <typename ElemType>
void MyRectangle<ElemType>::read(istream& in)
{
	cout<<"    �������"<<myNo.no<<"�������ζ���"<<endl;
	cout<<"        �������еĳ���";
	in>>length;
	cout<<"        �������еĿ�";
	in>>width;
}
//����>>����
template <typename ElemType>
istream& operator >>(istream& in,MyRectangle<ElemType>& iD)
{
	iD.read(in);
	return in;
}
//���ܣ������������Ϣ
template <typename ElemType>
void MyRectangle<ElemType>::display(ostream& out)const
{
	out<<"    ��"<<myNo.no<<"�������ζ��� �� = "<<length<<"\t �� = "
		<<width<<endl;
}
//����<<����
template <typename ElemType>
ostream& operator<< (ostream& out,const MyRectangle<ElemType>& oD)
{
	oD.display(out);
	return out;
}
