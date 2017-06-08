#include "AVL.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	AVLTree tree;
	tree.add(1, 11);
	tree.add(2, 12);
	tree.add(3, 25);
	tree.add(4, 10);
	tree.add(5, 850);
	tree.add(6, 33);
	cout << "Tree" << endl;
	tree.print();
	cout << "Del element" << endl;
	tree.del(5);
	tree.print();
	cout << "Search" << endl;
	cout << tree.get(6)<<endl;
	return 0;
}