/////////////////////////////////////////////////
//ExampleClass.h���������ݽṹC++�ඨ�壨���ࣩ
/////////////////////////////////////////////////
template <typename ElemType>
class Rectangle
{
public:
	//�����ε������
	class RectangleNo
	{
	public:
		int no;
	};
	void setNo(int i);
	void setLength(ElemType a);
	void setWidth(ElemType a);
	ElemType area();
	//
	Rectangle();
	Rectangle(const Rectangle& otherD);
	virtual ~Rectangle();
protected:
	ElemType length;
	ElemType width;
	RectangleNo myNo;
};
/////////////////////////////////////////////////
//���������ݽṹC++ʵ�֣����ࣩ
/////////////////////////////////////////////////
template <typename ElemType>
Rectangle<ElemType>::Rectangle()
{
	length = width = 0;
	cout<<"    �Զ����ù��캯��"<<endl;
}
//�������캯��
template <typename ElemType>
Rectangle<ElemType>::Rectangle(const Rectangle<ElemType>& otherD)
{
	length = otherD.length;
	width = otherD.width;
	myNo = otherD.myNo;
	cout<<"    �Զ����ÿ�����ʼ�����캯��Ϊ(";
	cout<<length<<","<<width<<")"<<endl;
}
//��������
template <typename ElemType>
Rectangle<ElemType>::~Rectangle()
{
	cout<<"\n    ��"<<myNo.no<<"�������ζ���("<<length<<","<<width<<")�����ڽ���"<<endl;
}
//����:���ó����ε����
template <typename ElemType>
void Rectangle<ElemType>::setNo(int i)
{
	myNo.no=i;
}
//���ܣ����ó����γ���
template <typename ElemType>
void Rectangle<ElemType>::setLength(ElemType a)
{
	length = a;
}
//���ܣ����ó����ο��
template <typename ElemType>
void Rectangle<ElemType>::setWidth(ElemType a)
{
	width = a;
}
//���ܣ��󳤷������
template <typename ElemType>
ElemType Rectangle<ElemType>::area()
{
	return length*width;
}