//��ʾ������
template <typename ElemType>
void displayCurrentObject(MyLinkList<ElemType>& link)
{
	int len = link.getLength();
	cout<<"��ǰ��ѭ����������"<<len<<"��Ԫ��,�ֱ�Ϊ��"<<endl;
	cout<<endl;
	if(len)
	cout<<link;
}

//
template <typename ElemType>
void ex3_2_1(MyLinkList<ElemType>& link,char& continueYesNo)
{
	int i;
	ElemType e;
	cout<<"************ȡ��ѭ��������ĵ�i�����************"<<endl<<endl;
	cout<<"��������Ҫȡ�Ľ�����ţ�";
	cin>>i;
	if(link.getElem(i,e)==ERROR)
		cout<<"����!��������û�е�"<<i<<"�Ľ��"<<endl;
	else
	    cout<<"��Ҫȡ��ѭ��������ĵ�4������������Ϊ"<<e<<endl<<endl;

	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <typename ElemType>
void ex3_2_2(MyLinkList<ElemType>& link,char& continueYesNo)
{
	int i;
	ElemType e;
	cout<<"**********�ڵ�i�����֮ǰ����һ��������Ϊe�Ľ��*********"<<endl<<endl;
	cout<<"��������Ҫ����֮ǰ���������ţ�";
	cin>>i;
	cout<<"��������Ҫ�������������";
	cin>>e;
	if(link.insert(i,e)==ERROR)
		cout<<"����!��������û�е�"<<i<<"�Ľ��"<<endl;
	else
	{
		cout<<endl<<"���Ѿ��ڵ�"<<i<<"�����֮ǰ����������Ϊ"<<e<<"�Ľ��"<<endl;
		cout<<link;
	}
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <typename ElemType>
void ex3_2_3(MyLinkList<ElemType>& link,char& continueYesNo)
{
	cout<<"************�жϷ�ѭ���������Ƿ�Ϊ��************"<<endl<<endl;
	printf("��ǰ��ѭ��������%s\n",link.isEmpty()?"Ϊ��":"��Ϊ��");
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <typename ElemType>
void ex3_2_4(MyLinkList<ElemType>& link,char& continueYesNo)
{
	cout<<"************���ѭ���������н��ĸ���************"<<endl<<endl;
	cout<<"��ѭ���������н��ĸ���Ϊ��"<<link.getLength()<<endl;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <typename ElemType>
void ex3_2_5(MyLinkList<ElemType>& link,char& continueYesNo)
{
	ElemType e;
	int i;
	cout<<"***********���ҵ�1����e����compare()��ϵ�Ľ��***********"<<endl;
	cout<<"���ҵ���ĳ�����Ĳ���"<<endl;
	cout<<"������������ҵĽ�㣺";
	cin>>e;
	if(link.locateElem(e,equal,i)==ERROR)
		cout<<"\t��������û�к�"<<e<<"��ȵĽ��"<<endl<<endl;
	else
		cout<<"\t���������"<<e<<"�ĵ�һ���������Ϊ"<<i<<endl<<endl;

	cout<<"���Ҵ���ĳ�����Ĳ���"<<endl;
	cout<<"������������ҵĽ�㣺";
	cin>>e;
	if(link.locateElem(e,great,i)==ERROR)
		cout<<"\t��������û�д���"<<e<<"�Ľ��"<<endl<<endl;
	else
		cout<<"\t���������"<<e<<"�ĵ�һ���������Ϊ"<<i<<endl<<endl;

	cout<<"����С��ĳ�����Ĳ���"<<endl;
	cout<<"������������ҵĽ�㣺";
	cin>>e;
	if(link.locateElem(e,less1,i)==ERROR)
		cout<<"\t��������С��"<<e<<"�Ľ��"<<endl<<endl;
	else
		cout<<"\t������С��"<<e<<"�ĵ�һ���������Ϊ"<<i<<endl<<endl;

	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <typename ElemType>
void ex3_2_6(MyLinkList<ElemType>& link,char& continueYesNo)
{
	ElemType e,prior_e;
	cout<<"************����ĳ���ǰ����������************"<<endl<<endl;
	cout<<"������������ҽ���������";
	cin>>e;
	if(link.priorElem(e,prior_e)==ERROR)
		cout<<"���󣡸��������޴˽����߸ý��Ϊͷ���"<<endl;
	else
		cout<<"�������"<<e<<"ǰ����������Ϊ"<<prior_e<<endl<<endl;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <typename ElemType>
void ex3_2_7(MyLinkList<ElemType>& link,char& continueYesNo)
{
	ElemType e,next_e;
	cout<<"************����ĳ����̵�������************"<<endl<<endl;
	cout<<"������������ҽ���������";
	cin>>e;
	if(link.nextElem(e,next_e)==ERROR)
		cout<<"���󣡸��������޴˽����߸ý��Ϊβ���"<<endl;
	else
		cout<<"�������"<<e<<"��̵�������Ϊ"<<next_e<<endl<<endl;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <typename ElemType>
void ex3_2_8(MyLinkList<ElemType>& link,char& continueYesNo)
{
	ElemType e;
	cout<<"*********ɾ����ѭ����������������Ϊe�ĵ�һ�����********"<<endl;
	cout<<"����������ɾ������������";
	cin>>e;
	if(link.deleteElem(e)==ERROR)
		cout<<"����!���������޴˽��"<<endl;
	else
	{
		cout<<endl<<"ɾ�����ѭ��������Ϊ"<<endl;
		cout<<link;
	}
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
template <typename ElemType>
void ex3_2_9(MyLinkList<ElemType>& link,char& continueYesNo)
{

	cout<<"************ɾ����ѭ���������е��ظ�ֵ************"<<endl;
	link.deleteRepeat();
	cout<<endl<<link;

	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//��ѭ�������������
template <typename ElemType>
void ex3_2_10(MyLinkList<ElemType>& link,char& continueYesNo)
{

	cout<<"************��ѭ�������������************"<<endl<<endl;
	cout<<"��ѭ�����������ú�Ϊ��"<<endl;
	link.adverse();
	cout<<link;

	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//��һ����ѭ��������ֵ����һ����ѭ��������
template <typename ElemType>
void ex3_2_11(MyLinkList<ElemType>& link,char& continueYesNo)
{

	cout<<"*******����һ����ѭ��������ֵ����ǰ��ѭ��������*******"<<endl;
	MyLinkList<int> otherL;
	otherL.randCreate();
	link = otherL;
	cout<<endl<<"��һ����ѭ��������ֵ����ǰ��ѭ��������Ϊ��"<<endl<<link;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//�ѷ�ѭ���������ÿ�
template <typename ElemType>
void ex3_2_12(MyLinkList<ElemType>& link,char& continueYesNo)
{

	cout<<"*************�ѵ�ǰ��ѭ���������ÿ�*****************"<<endl;
	link.clear();
	cout<<endl<<"��ǰ��ѭ���������ÿպ󣬽�����Ϊ��"<<link.getLength()<<endl<<endl;
	cout<<" ***************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//������ɷ�ѭ��������
template <typename ElemType>
void ex3_2_13(MyLinkList<ElemType>& link,char& continueYesNo)
{
	cout<<"**************������ɷ�ѭ��������****************"<<endl<<endl;
	link.randCreate();

	cout<<"������ɵķ�ѭ��������Ϊ��"<<endl;
	cout<<link;
	cout<<endl;
	cout<<" **************************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//�����еķ�ѭ���������ʼ����ѭ��������
template <typename ElemType>
void ex3_2_14(MyLinkList<ElemType>& link,char& continueYesNo)
{
	cout<<"**************�����еķ�ѭ���������ʼ����ѭ��������****************"<<endl<<endl;
	MyLinkList<ElemType> otherL(link);
	
	cout<<"��ʼ�������һ����ѭ��������Ϊ��"<<endl;
	cout<<otherL;
	cout<<endl;
	cout<<" **************************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}
//�����ѭ��������
template <typename ElemType>
void ex3_2_15(MyLinkList<ElemType>& link,char& continueYesNo)
{
	cout<<"*********************�����ѭ��������*************************"<<endl<<endl;
	link.clear();
	cin>>link;
	cout<<"������ķ�ѭ��������Ϊ��"<<endl;
	cout<<link;
	cout<<endl;
	cout<<" **************************************************"<<endl<<endl;
	cout<<"  ��������(Y.����\tN.����)?";
	cin>>continueYesNo;
}

