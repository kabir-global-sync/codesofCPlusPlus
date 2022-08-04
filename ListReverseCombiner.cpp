#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of list::";
    cin >> size;
    // creating first list
    int lst1[size] = {};
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element for list1::";
        cin >> lst1[i];
    }
    // creating second list
    int lst2[size] = {};
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element for list2::";
        cin >> lst2[i];
    }
    for (int j = 0; j < size; j++)
    {
        cout << lst1[j] << "<-->" << lst2[size - j-1] << endl;
    }

    return 0;
}