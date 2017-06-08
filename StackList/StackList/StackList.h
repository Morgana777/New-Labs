#ifndef _STACKLIST_H_
#define _STACKLIST_H_
#include <iostream>

using namespace std;


template <typename T>

class StackList
{
private:
	struct Stack
{
	T key;
	Stack*next;
};
	Stack*next;
	int topIndex;


public:
	
	StackList() { next = NULL; topIndex = 0; };
	

	void Push(T d)
	{
		Stack*pv = new Stack;
		pv->key = d;
		pv->next = next;
		next = pv;
		topIndex++;
	}

	T Pop()
	{
		topIndex--;
		if (topIndex >= 0)
		{
			T temp = next->key;
			Stack*pv = next;
			next = next->next;
			delete pv;
			return temp;
		}
		else throw "Стек пуст";
		
	}

	bool is_Empty()
	{
		if (topIndex<= 0) return true;
		else return false;
	}
	
	~StackList()
	{
		while (next)
		{
			Stack*temp = next->next;
			delete next;
			temp = next;
		}

	}

};


#endif