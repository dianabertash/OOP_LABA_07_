#include<iostream>
#include <fstream>
#include <queue>
#include <ctime>
using namespace std;

int main()
{
	ifstream in;
	in.open("D:\\Labs\\Text1.txt");
	ofstream out;
	out.open("D:\\Labs\\Text2.txt", std::ios::app);
	queue<int> *list = new queue<int>();
	int item;
	int size;

	size = list->size();
	cout << "After creating: size = " << size << endl;

	while (in >> item)
	{
		list->push(item);
		size = list->size();
		out << "Push: " << item << " (size = " << size << ")" << endl;
		cout << "Push: " << item << " (size = " << size << ")" << endl;

	}
	while (size != 0)
	{
		list->pop();
		size = list->size();
		out << "list->pop(): size = " << size << endl;
		cout << "list->pop(): size = " << size << endl;
	}

	int t = clock();
	cout << "Program Time: " << ((float)t) / CLOCKS_PER_SEC << "seconds" << endl;

	in.close();
	out.close();
	delete list;
	system("pause");
	return 0;
}


