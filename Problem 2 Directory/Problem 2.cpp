//============================================================================
// Name        : Question.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Data
{
private:

	int currentSize;
	int arr[];
public:
	Data()
	{
		currentSize = 0;
	}

	void add(int a)
	{

		for(int i = currentSize; i >= 0; i--)
		{

			arr[i + 1] = arr[i];
		}
		arr[0] = a;
		currentSize++;
	}

	void remove()
	{
		currentSize--;
	}

	int getValue(int i)
	{
		if(i > currentSize)
			return -1;
		else
			return arr[i];
	}

	void print()
	{
		for(int i = 0; i < currentSize; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
};

int main() {
	Data d;
	d.add(0);
	d.add(10);
	d.add(5);
	d.add(4);
	d.add(9);
	d.add(1);
	d.print();
	int x = d.getValue(0);
	int y = d.getValue(3);
	cout << "Value of index 0 = " << x << " and the value of index 3 = " << y << endl;
	return 0;
}
