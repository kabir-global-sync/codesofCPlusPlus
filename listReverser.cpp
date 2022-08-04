#include <iostream>
using namespace std;

void listReverse(int lst[], int size) //[1,2,3,4] 
{
    int holder;
    for (int j = 0; j < size/2; j++)
    {
        holder=lst[j];
        lst[j]=lst[size-j-1];
        lst[size-j-1]=holder;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<lst[i]<<endl; 
    }
}

int main()
{
    int n;
    cout << "Enter array size::";
    cin >> n;

    int array[n] = {};
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element::";
        cin >> array[i];
    }
    listReverse(array, n);
    
    return 0;
}