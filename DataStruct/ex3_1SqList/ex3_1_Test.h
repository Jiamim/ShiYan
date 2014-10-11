//#include "E:\wangwei\Test Include\MySqList.h"
//��ʾ������
template <typename ElemType>
void displayCurrentObject(MySqList<ElemType> sq)
{
	cout<<"��ǰ˳�����"<<sq.getLength()<<"��Ԫ��,�ֱ�Ϊ��"<<endl;
	cout<<sq;
}

//����ex3_1_1:�ڵ�i��Ԫ��֮ǰ����һ��Ԫ��
template <typename ElemType>
void ex3_1_1(MySqList<ElemType>& sq,char& continueYesNo)
{
	int i;
	ElemType e;
	cout<<" ***********\4�ڵ�i��Ԫ��֮ǰ����һ��Ԫ��\4**********"<<endl<<endl;
	cout<<"    ��������Ҫ�ڵڼ���Ԫ��֮ǰ����Ԫ��: ";
	cin>>i;
	cout<<"    ��������Ҫ�����Ԫ�ص�ֵ: ";
	cin>>e;
	cout<<"    ��Ҫ�ڵ�"<<i<<"��Ԫ��֮ǰ����Ԫ��"<<e<<endl;
	if(sq.insert(i,e)==ERROR)
		cout<<"    �����޴�λ��"<<endl;
	else
		cout<<sq;
	
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//ex3_1_Test.h������һ��ͷ�ļ�
//���ԣ��ж�˳����Ƿ�Ϊ��
template <typename ElemType>
void ex3_1_2(MySqList<ElemType>& sq,char& continueYesNo)
{
	cout<<" ***********\4�ж�˳����Ƿ�Ϊ��\4**********"<<endl<<endl;
	if(sq.isEmpty())
		cout<<"��ǰ˳���Ϊ��"<<endl;
	else
	{
		cout<<"��ǰ˳���Ϊ��"<<endl;
		cout<<sq;
	}
	cout<<" *****************************************"<<endl<<endl;
	cout<<" ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//���ԣ���˳�����Ԫ�صĸ���
template <typename ElemType>
void ex3_1_3(MySqList<ElemType>& sq,char& continueYesNo)
{
	cout<<" *************\4��˳�����Ԫ�صĸ���\4************"<<endl<<endl;
	cout<<"˳���Ԫ�ظ���Ϊ��"<<sq.getLength()<<endl;
	cout<<" *****************************************"<<endl<<endl;
	cout<<" ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//���ԣ�ȡ��i��Ԫ��
template <typename ElemType>
void ex3_1_4(MySqList<ElemType>& sq,char& continueYesNo)
{
	int i;
	ElemType e;
	cout<<" ************\4 ȡ �� i �� Ԫ �� \4**************"<<endl<<endl;
	cout<<"    ����������ȡ��Ԫ����ţ�1--10��:";
	cin>>i;
	if(sq.getElem(i,e)==ERROR)
		cout<<"    �����޴�Ԫ��"<<endl;
	else
		cout<<"    ����ȡ�ĵ�"<<i<<"��Ԫ�ص�ֵΪ��"<<e<<endl;
	cout<<" *****************************************"<<endl<<endl;
	cout<<" ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//���ԣ����ҵ�1����ĳԪ������compare()��ϵ�����
template <typename ElemType>
void ex3_1_5(MySqList<ElemType>& sq,char& continueYesNo)
{
	ElemType e;
	cout<<" *******\4���ҵ�1����ĳԪ������compare()��ϵ�����\4********"<<endl<<endl;
	cout<<"\t���ҵ���ĳ��Ԫ�صĲ���"<<endl;
	cout<<"\t������������ҵ�Ԫ�أ�";
	cin>>e;
	cout<<"������ҵĵ�һ������"<<e<<"��Ԫ�ص����Ϊ"<<sq.locateElem(e,equal)<<endl<<endl;
	
	cout<<"\t���Ҵ���ĳ��Ԫ�صĲ���"<<endl;
	cout<<"\t������������ҵ�Ԫ�أ�";
	cin>>e;
	cout<<"������ҵĵ�һ������"<<e<<"��Ԫ�ص����Ϊ"<<sq.locateElem(e,great)<<endl<<endl;
	
	cout<<"\t����С��ĳ��Ԫ�صĲ���"<<endl;
	cout<<"\t������������ҵ�Ԫ�أ�";
	cin>>e;
	cout<<"������ҵĵ�һ��С��"<<e<<"��Ԫ�ص����Ϊ"<<sq.locateElem(e,less1)<<endl<<endl;
	cout<<" *****************************************"<<endl<<endl;
	cout<<" ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//���ԣ�����ĳԪ�ص�ǰ��
template <typename ElemType>
void ex3_1_6(MySqList<ElemType>& sq,char& continueYesNo)
{
	ElemType e,e1;
	cout<<" ***********\4����ĳԪ�ص�ǰ��\4***********"<<endl<<endl;
	cout<<"    ���������������ǰ����Ԫ�أ�";
	cin>>e;
	if(sq.priorElem(e,e1)==ERROR)
		cout<<"    ����û�����Ԫ�ػ��߸�Ԫ���ǵ�һ��Ԫ��û��ǰ��"<<endl;
	else
		cout<<"    ������ҵ�Ԫ��"<<e<<"��ǰ��Ϊ"<<e1<<endl;
	
	cout<<" *****************************************"<<endl<<endl;
	cout<<" ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//���ԣ�����ĳԪ�صĺ��
template <typename ElemType>
void ex3_1_7(MySqList<ElemType>& sq,char& continueYesNo)
{
	ElemType e,e1;
	cout<<" **********\4����ĳԪ�صĺ��\4**********"<<endl<<endl;
		cout<<"    ����������������̵�Ԫ�أ�";
	cin>>e;
	if(sq.nextElem(e,e1)==ERROR)
		cout<<"    ����û�����Ԫ�ػ��߸�Ԫ�������һ��Ԫ��û�к��"<<endl;
	else
		cout<<"    ������ҵ�Ԫ��"<<e<<"�ĺ��Ϊ"<<e1<<endl;
	
	cout<<" *****************************************"<<endl<<endl;
	cout<<" ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//���ԣ�ɾ����i��Ԫ��
template <typename ElemType>
void ex3_1_8(MySqList<ElemType>& sq,char& continueYesNo)
{
	int i;
	ElemType e;
	cout<<" *******\4ɾ����i��Ԫ��\4********"<<endl<<endl;
	cout<<"    ����������ɾ��Ԫ�ص����(1--10):";
	cin>>i;
	if(sq.deleteElem(i,e)==ERROR)
		cout<<"    ����û�����Ԫ��"<<endl;
	else
		cout<<"    ����ɾ���ĵ�"<<i<<"��Ԫ�ص�ֵΪ"<<e<<endl;
	cout<<"    ɾ�����˳���Ϊ"<<endl;
	cout<<sq;
	cout<<" *****************************************"<<endl<<endl;
	cout<<" ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//���ԣ���һ��˳���ֵ����һ��˳���
template <typename ElemType>
void ex3_1_9(MySqList<ElemType>& sq,char& continueYesNo)
{
	MySqList<ElemType> other;
	cout<<" *******\4��һ��˳���ֵ����һ��˳���\4********"<<endl<<endl;
	other = sq;
	cout<<"    ��һ��˳���ֵ����ǰ˳���Ϊ��"<<endl;
	cout<<other;
	
	cout<<" *****************************************"<<endl<<endl;
	cout<<" ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//���ԣ���˳����ÿ�
template <typename ElemType>
void ex3_1_10(MySqList<ElemType>& sq,char& continueYesNo)
{
	cout<<" *******\4��˳����ÿ�\4********"<<endl<<endl;
	sq.clear();
	cout<<"    ��ǰ˳����ÿպ�Ԫ�صĸ���Ϊ��"<<sq.getLength()<<endl;
	
	cout<<" *****************************************"<<endl<<endl;
	cout<<" ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//�������˳���Ԫ��ֵΪ0��99֮���������
template <typename ElemType>
void ex3_1_11(MySqList<ElemType>& sq,char& continueYesNo)
{
	cout<<" *******\4�������˳���Ԫ��ֵΪ0��99֮���������\4********"<<endl<<endl;
	sq.randCreate();
	cout<<"��ǰ˳���Ϊ��"<<endl;
	cout<<sq;
	
	cout<<" *****************************************"<<endl<<endl;
	cout<<" ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//�����е�˳����ʼ����һ��˳���
template <typename ElemType>
void ex3_1_12(MySqList<ElemType>& sq,char& continueYesNo)
{
	cout<<" *************\4�����е�˳����ʼ����һ��˳���\4************"<<endl<<endl;
	MySqList<ElemType> sqOther(sq);
	cout<<"\n    ��ʼ�������һ��˳������Ϊ: "<<endl;
	cout<<sqOther;
	cout<<" *****************************************"<<endl<<endl;
	cout<<" ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//����˳���
template <typename ElemType>
void ex3_1_13(MySqList<ElemType>& sq,char& continueYesNo)
{
	cout<<" *************\4����˳���\4************"<<endl<<endl;
	cin>>sq;
	cout<<sq;
	cout<<" *****************************************"<<endl<<endl;
	cout<<" ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//����˳���Ĳ���������
template <typename ElemType>
void ex3_1_14(MySqList<ElemType>& sq,char& continueYesNo)
{
	system("cls");
	cout<<" *************\4����˳���Ĳ���������\4************"<<endl<<endl;
	MySqList<int> sq2;
	sq2.randCreate();
	cout<<"��һ��˳���Ϊ��"<<endl;
	cout<<sq;
	cout<<"�ڶ���˳���Ϊ��"<<endl;
	cout<<sq2;
	cout<<"��������˳����"<<endl;
	cout<<"����Ϊ:"<<endl;
	cout<<unionSet(sq,sq2);
	cout<<"����Ϊ:"<<endl;
	cout<<intersectionSet(sq,sq2);
	cout<<"�Ϊ:"<<endl;
	cout<<dirfferenceSet(sq,sq2);
	cout<<" *****************************************"<<endl<<endl;
	cout<<" ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}


