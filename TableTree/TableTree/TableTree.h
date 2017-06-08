#ifndef _TABLETREE_H_
#define _TABLETREE_H_

#include<string>

using namespace std;
class Record
{
public:
	string Key;
	int Data;
	Record()
	{
		int Key = 0;
	}

	Record(string _Key, int _Data)
	{
		Key = _Key;
		Data = _Data;
	}

	Record operator= (const Record&Rec)
	{
		Key = Rec.Key;
		Data = Rec.Data;
		return *this;
	}
};
	class TreeTable
	{
	private:
		int Size;
		Record *List;
		int Count;
	public:
		TreeTable(int _Size = 100)
		{
			Size = _Size;
			List = new Record[Size];
			Count = 0;
		}
		~TreeTable()
		{
			delete[]List;
		}

	    int operator[](string k)
		{
			for (int i(0); i < Count; i++)
			{
				if (List[i].Key == k) return List[i].Data;

			}
			return -1;
		}
		int Add(Record &Rec)
		{
			if (Count < Size)
			{
				for (int i(0); i < Count; i++)
				{
					if (Rec.Key == List[i].Key)
					if (Rec.Data == List[i].Data)
						return 1;
					else return 0;
				}

				List[Count] = Rec;
				Count++;
				return 1;
			}
			else return 0;
		}
		bool Del(string RecKey)
		{
			int pos;
			pos = Seach(RecKey);
			if (pos == -1) return false;
			else
			{
				for (int i = pos; i < Count - 1; i++)
					List[i] = List[i + 1];
				Count--;
				return true;
			}
		}
		int Seach(string RecKey)
		{
			for (int i(0); i < Count; i++)
			{
				if (List[i].Key == RecKey) return i;
			}

			return -1;
		}

		void Print()
		{
			for (int i(0); i < Count; i++)
			{
				cout << List[i].Key << " " << List[i].Data << endl;
			}
		}

	
	};

	
#endif