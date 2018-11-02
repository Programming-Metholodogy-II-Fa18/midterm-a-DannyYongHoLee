//============================================================================
// Name        : Problem.cpp
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

	int problemThree(Data d, int value)
	{

	}
};

int main() {
	Data d;
	d.add(41);
	d.add(33);
	d.add(20);
	d.add(18);
	d.add(14);
	d.add(12);
	d.add(10);
	d.add(8);
	d.add(5);
	d.add(1);

	return 0;
}
