
#include "Util.h"
#include <iostream>
using namespace std;


void Util::printArray(int* arr, int num)
{
	for (int i = 0; i < num; ++i)
	{
		cout << i<<" ";
	}

	cout << endl;

	for (int i = 0; i < num; ++i)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}


void Util::remakeArray(int* arr, int num)
{
	for (int i = 0; i < num; ++i)
	{
		arr[i] = i;
	}
}