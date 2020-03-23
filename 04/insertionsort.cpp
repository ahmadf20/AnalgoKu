#include <iostream>

using namespace std;

void insertionSort(int arr[], int size)

{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    int arr[] = {1, 648, 5, 8, 4, 9, 4, 6, -5, 1, 0};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "INPUT" << endl;
    print(arr, arr_size);

    insertionSort(arr, arr_size);

    cout << "OUTPUT" << endl;
    print(arr, arr_size);
}