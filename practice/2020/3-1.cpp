#include <iostream>
using namespace std;

int main() {
	int aList[6] = {};

	cout << "입력: ";
	for (int i = 0; i < 6; i++)	{
		cin >> aList[i];
	}

	int min = aList[0];
	int num = 0;
	for (int i = 0; i < 6; i++)	{
		if (min > aList[i])	{
			min = aList[i];
			num = i;
		}
	}

	aList[num] = aList[0];
	aList[0] = min;

	cout << "출력: ";
	for (int k = 0; k < 6; k++)	{
		cout << aList[k] << " ";
	}

	return 0;
}