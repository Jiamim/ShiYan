#ifndef _HUFFMANCODEC_H
#define _HUFFMANCODEC_H

#include <iostream>
#include <queue>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include "HuffmanNode.h"
#include "HuffmanLeaf.h"
using namespace std;

class HuffmanCodec
{
public:
	HuffmanCodec();
	void coding();
	void decoding();
	void print();
	void treePrint();
private:
	/* ˽�г�Ա���� */
	// �����ļ�
	void parseFile();
	// ����Huffman��
	void buildTree();
	// ����huffman��
	void travel(HuffmanNode *head, string code);
	// ������ӡ
	void concaveTablePrint(HuffmanNode *head,int offset);

	/* ���Ա */ 
	priority_queue<HuffmanNode *, vector<HuffmanNode *>, CmpNode> nodes;
	map<char, int> count;
	map<char, string> dict;
	HuffmanNode *tree;
	ifstream infile;
	ofstream outfile;

	string transfile;
	string codefile;
	string textfile;
	string codeprint;
	string treeprint;
	string huffmantree;
};

#endif