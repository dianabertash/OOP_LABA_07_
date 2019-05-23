#include<iostream>
#include <fstream>
#include <queue>

using namespace std;

int main()
{
	ifstream in;
	in.open("C:\\Users\\Пользователь\\Desktop\\Text1.txt");
	ofstream out;
	out.open("C:\\Users\\Пользователь\\Desktop\\Text2.txt", std::ios::app);
	queue<int> *list = new queue<int>();
	int item;
	int size;

	size = list->size();
	cout << "After creating: size = " << size << endl;
	while (in.is_open())
	{
		while (in >> item)
		{
			list->push(item);
			size = list->size();
			out << "Push: " << item << " (size = " << size << ")" << endl;
			cout << "Push: " << item << " (size = " << size << ")" << endl;
			if (item % 2 == 0)
			{
				list->pop();
				size = list->size();
				out << "Pop: " << item << " (size = " << size << ")" << endl;
				cout << "Pop: " << item << " (size = " << size << ")" << endl;
			}
		}

	}

	delete list;
	in.close();
	out.close();
	system("pause");
	return 0;
}