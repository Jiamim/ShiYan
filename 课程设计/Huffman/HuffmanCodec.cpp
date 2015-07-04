#include "HuffmanCodec.h"
#include <iomanip>

/////////////////////////////////////////////////////
// Huffman
/////////////////////////////////////////////////////
HuffmanCodec::HuffmanCodec()
{
	transfile = "tobetrans.txt";
	codefile = "codefile.txt";
	huffmantree = "huffmantree.txt";
	textfile = "textfile.txt";
	codeprint = "codeprint.txt";
	treeprint = "treeprint.txt";
}

void HuffmanCodec::coding()
{
	parseFile();
	buildTree();
	travel(tree, "");

	infile.open(transfile);
	outfile.open(codefile);
	if (!infile)
	{
		cerr<<"error: unalbe to open input file: "<<transfile<<endl;
		exit(-1);
	}
	if (!outfile)
	{
		cerr<<"error: unalbe to open output file: "<<codefile<<endl;
		exit(-1);
	}

	cout<<"���ڶ��ļ�"<<transfile<<"�е����Ľ��б���..."<<endl;
	string str;
	string code;
	while (getline(infile, str))
	{
		unsigned size = str.size();
		for (unsigned i = 0; i < size; i++)
		{
			char key = str[i];
			code = dict[key];
			outfile<<code;
		}
	}
	cout<<"�������Ѵ����ļ�"<<codefile<<"�С�"<<endl;

	cout<<"���ڽ����õĹ������������ļ�"<<huffmantree<<"��..."<<endl;
	outfile.close();
	outfile.open(huffmantree);
	map<char, string>::iterator it;
	for (it = dict.begin(); it != dict.end(); it++)
	{
		outfile<<it->first<<" "<<it->second<<endl;
		
	}
	cout<<"�Ѵ��롣"<<endl;
	infile.close();
	outfile.close();
}

void HuffmanCodec::decoding()
{
	cout<<"���������ѽ��õĹ����������ļ�"<<codefile<<"��������..."<<endl;
	infile.open(codefile);
	outfile.open(textfile);
	if (!infile)
	{
		cerr<<"error: unalbe to open input file: "<<codefile<<endl;
		exit(-1);
	}
	if (!outfile)
	{
		cerr<<"error: unalbe to open output file: "<<textfile<<endl;
		exit(-1);
	}
	string line;
	while (getline(infile, line))
	{
		HuffmanNode *node = tree;
		unsigned size = line.size();
		for (unsigned i = 0; i < size; i++)
		{
			if (line[i] == '0')
			{
				node = node->getLeft();
			}
			else 
			{
				node = node->getRight();
			}
			if (node->isLeaf())
			{
				outfile<<((HuffmanLeaf *)node)->getData();
				node = tree;
			}
		}
	}
	infile.close();
	outfile.close();
	cout<<"����Ѵ���"<<textfile<<"�С�"<<endl;
}

void HuffmanCodec::print()
{
	cout<<"������ӡ�����ļ�"<<codefile<<",ÿ��50�����롣"<<endl;
	infile.open(codefile);
	outfile.open(codeprint);
	if (!infile)
	{
		cerr<<"error: unalbe to open input file: "<<codefile<<endl;
		exit(-1);
	}
	if (!outfile)
	{
		cerr<<"error: unalbe to open output file: "<<codeprint<<endl;
		exit(-1);
	}
	char str[55];
	while (!infile.eof())
	{
		infile.read(str, 50);
		int size = (int)infile.gcount();
		str[size] = '\0';
		cout<<str<<endl;
		outfile<<str<<endl;
	}
	infile.close();
	outfile.close();
	cout<<"ͬʱ���ַ���ʽ�ı����ļ���д���ļ�"<<codeprint<<"�С�"<<endl;
}

void HuffmanCodec::treePrint()
{
	cout<<"���ڴ�ӡ�����������������ڴ��еĹ���������\"�����\"��ʽ��ʾ���ն��ϡ�"<<endl;
	outfile.open(treeprint, ios::app);
	if (!outfile)
	{
		cerr<<"error: unalbe to open output file: "<<treeprint<<endl;
		exit(-1);
	}
	concaveTablePrint(tree, 0);
	cout<<"ͬʱ���ַ���ʽ�Ĺ��������Ѿ�д���ļ�"<<treeprint<<"�С�"<<endl;
	outfile.close();
}

///////////////////////////////////////////////////////
// ˽�г�Ա����
///////////////////////////////////////////////////////
void HuffmanCodec::parseFile()
{
	infile.open(transfile);
	if (!infile)
	{
		cerr<<"error: unalbe to open input file: "<<transfile<<endl;
		exit(-1);
	}
	string str;
	while (getline(infile, str))
	{
		unsigned size = str.size();
		for (unsigned i = 0; i < size; i++)
		{
			char key = str[i];
			if(count.find(key) != count.end())
				count[key]++;
			else
				count[key] = 1;
		}
	}
	infile.close();
}

void HuffmanCodec::buildTree()
{
	for (map<char ,int>::iterator it = count.begin(); it != count.end(); it++)
	{
		HuffmanLeaf *leaf = new HuffmanLeaf((*it).first, (*it).second);
		nodes.push(leaf);
	}

	while (nodes.size() > 1)
	{
		HuffmanNode *node1 = nodes.top();
		nodes.pop();
		HuffmanNode *node2 = nodes.top();
		nodes.pop();
		
		int weight = node1->getWeight() + node2->getWeight();
		HuffmanNode *newNode = new HuffmanNode(weight, node1, node2);
		nodes.push(newNode);
	}
	tree = nodes.top();
}

void HuffmanCodec::travel(HuffmanNode *head, string code)
{
	if (head->isLeaf())
	{
		char key = ((HuffmanLeaf *)head)->getData();
		dict[key] = code;
		return;
	}
	string tmpcode = code;
	travel(head->getLeft(), tmpcode.append("0"));
	travel(head->getRight(), code.append("1"));
}

void HuffmanCodec::concaveTablePrint(HuffmanNode *head, int offset)
{
	if (head->isLeaf())
	{
		return;
	}
	cout<<setw(offset + 2)<<setiosflags(ios::right);
	cout<<head->getWeight()<<endl;

	outfile<<setw(offset + 2)<<setiosflags(ios::right);
	outfile<<head->getWeight()<<endl;

	concaveTablePrint(head->getLeft(), offset + 2);
	concaveTablePrint(head->getRight(), offset + 2);
}

