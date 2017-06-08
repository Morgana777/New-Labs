#include <iostream>
#include "TableTree.h"
#include <string>
using namespace std;

void main()
{
	TreeTable table(5);
	Record a1("A", 8);
	Record a2("Z", 11);
	Record a3("Y", 9);
	Record a4("T", 1);
	Record a5("P", 2);
	table.Add(a1);
	table.Add(a2);
	table.Add(a3);
	table.Add(a4);
	table.Add(a5);
	table.Print();
	cout << "po klucu Z: " << (table.Seach("Z")+1) << endl;
	cout << "po klucu P: " << (table.Seach("P") + 1) << endl;
	cout << "Po indexy Z:"<< table["Z"] << endl;
	cout << "Po indexy P:"<< table["P"] << endl;
	cout << "del Y" << endl;
	table.Del("Y");
	table.Print();

}