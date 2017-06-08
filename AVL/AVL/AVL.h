#ifndef _AVL_H_
#define _AVL_H_
#include <iostream>
#include <iomanip>


typedef int DataType;

struct NODE
{
	DataType key;  // ���� ����
	int value;	   // ������
	int height;     // ������ ���������
	NODE* left;
	NODE* right;
	NODE(DataType k, int val)
	{ 
		key = k; 
		value = val; 
		left = right = 0; 
		height = 1; 
	}
};

class AVLTree
{	
private:
	int   height(NODE* p);  
	int  balanceVal(NODE* p); // ���������� �������
	void fixheight(NODE* p); // ��������� ���� ������

	NODE* rotateright(NODE* p); // ������ ������� ������ p
	NODE* rotateleft(NODE* q); // ����� ������� ������ q

	NODE* balance(NODE* p);            // ������������ ���� p
	NODE* insert(NODE* p, DataType k, int val); // ������� ����� k � ������� val � ������ � ������ p
	NODE* searchmin(NODE* p);            // ����� ���� � ����������� ������ � ������ p 
	NODE* delmin(NODE* p);          // �������� ���� � ����������� ������ �� ������ p
	NODE* del(NODE* p, DataType k); // �������� ����� k �� ������ p
	NODE* find(NODE*p, DataType k);
	void  print_dfs(NODE *p, int level);
public:
	void PRINT(NODE* n);
	AVLTree() :top(0){};
	void add(DataType k, int val); 
	DataType get(DataType key); 
	void del(DataType key); 
	void print();
private:
	NODE* top;
};

#endif