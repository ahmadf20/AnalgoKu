#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - (i + 1); j++) //+1 : index of array (i) starts from 0
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 4, 8, 9, 7, 2, 0, -5, 4, 1, 5};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "INPUT" << endl;
    print(arr, arr_size);

    bubbleSort(arr, arr_size);

    cout << "OUTPUT" << endl;
    print(arr, arr_size);
}