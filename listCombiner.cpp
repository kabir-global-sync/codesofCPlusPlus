#include <iostream>
using namespace std;
int main()
{
	int size1;
	cout << "Enter size of array 1::";
	cin >> size1;
	int size2;
	cout << "Enter size of array 2::";
	cin >> size2;
	string lst1[size1] = {};
	for (int i = 0; i < size1; i++)
	{
		cout << "Enter element for array1::";
		cin >> lst1[i];
	}

	string lst2[size2] = {};
	for (int i = 0; i < size2; i++)
	{
		cout << "Enter element for array2::";
		cin >> lst2[i];
	}
	for (int j = 0; j < size1; j++)
	{
		for (int k = 0; k < size2; k++)
		{
			cout << *(lst1 + j) << " " << *(lst2 + k) << endl;
		}
	}
	return 0;
}