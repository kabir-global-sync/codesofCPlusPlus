#include <iostream>
using namespace std;

void BubbleSort(int arr[], int size)
{
    int i = 0;
    while (i < size)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        i += 1;
    }
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
}
int main()
{
    int size;
    cout << "Enter size of array::";
    cin >> size;
    int array[size] = {};
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element::";
        cin >> array[i];
    }
    BubbleSort(array, size);
    return 0;
}