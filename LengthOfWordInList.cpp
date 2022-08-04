#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of array::";
    cin >> size;
    string lst[size] = {};
    for (int i = 0; i < size; i++)
    {
        cout << "Enter word::";
        cin >> lst[i];
    }

    int n;
    string wd;
    cout << "Enter length of the word::";
    cin >> n;
    for (int j = 0; j < size; j++)
    {
        wd = lst[j];
        if (wd.length() == n)
        {
            cout << wd << endl;
        }
    }
    return 0;
}
// five, three,two, one,seven, eleven, four