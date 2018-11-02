//============================================================================
// Name        : Practice.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void merge(int a[], int low, int high, int mid)
{
	int i, j, k, temp[high - low + 1];
	i = low;
	k = 0;
	j = mid + 1;

	while(i <= mid && j <= high)
	{
		if(a[i] < a[j])
		{
			temp[k] = a[i];
			i++;
			k++;
		}

		else
		{
			temp[k] = a[j];
			j++;
			k++;
		}
	}

	while(i <= mid)
	{
		temp[k] = a[i];
		i++;
		k++;
	}

	while(j <= high)
	{
		temp[k] = a[j];
		j++;
		k++;
	}

	for(i = low; i <= high; i++)
		a[i] = temp[i - low];
}

void mergeSort(int a[], int low, int high)
{
	int mid;
	if(low < high)
	{
		mid = (high + low) / 2;
		mergeSort(a, low, mid);
		mergeSort(a, mid + 1, high);

		merge(a, low, high, mid);
	}
}

void examSort(int a[], int size)
{
	mergeSort(a, 0, size - 1);
}

void print(int a[], int size)
{
	for(int i = 0; i < size; i++)
		cout << a[i] << " ";
	cout << endl;
}

int main() {
	int size = 7;
	int a[size] = {15, 9, 60, 44, 12, 1, 4};
	print(a, size);
	examSort(a, size);
	print(a, size);
	return 0;
}
