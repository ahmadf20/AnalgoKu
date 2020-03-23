#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int min_index = i; //index of minimum element in subarray
        for (int j = i + 1; j < size; j++)
        {
            if (arr[min_index] > arr[j])
            {
                min_index = j;
            }
            swap(arr[min_index], arr[i]);
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
    int arr[] = {5, 6, 8, 7, 4, 5, 12, -1, 0, 65};
    int size_arr = sizeof(arr) / sizeof(arr[0]);

    cout << "INPUT" << endl;
    print(arr, size_arr);

    selectionSort(arr, size_arr);

    cout << "OUTPUT" << endl;
    print(arr, size_arr);
}