#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

void merge(int arr[], int l, int mid, int r)
{
    int sizeL = mid - l + 1; //left-array's length, +1 since index starts from 0
    int sizeR = r - mid;     //right-array's length

    int arr_left[sizeL], arr_right[sizeR]; //temp data

    for (int i = 0; i < sizeL; i++) //copy data to temp arr_left
    {
        arr_left[i] = arr[l + i];
    }

    for (int i = 0; i < sizeR; i++) //copy data to temp arr_right
    {
        arr_right[i] = arr[mid + 1 + i]; //mid+1 since arr_right starts from the next of mid element
    }

    int i = 0; //initial index of left subarray
    int j = 0; //initil index of right subaray
    int k = l; //initial index of merged subarray

    while (i < sizeL && j < sizeR)
    {
        if (arr_left[i] < arr_right[j]) //if left element is smaller than right element, copy element of left array
        {
            arr[k] = arr_left[i];
            i++;
        }
        else
        {
            arr[k] = arr_right[j];
            j++;
        }
        k++;
    }

    //copy remainnig elements
    while (i < sizeL)
    {
        arr[k] = arr_left[i];
        i++;
        k++;
    }

    while (j < sizeR)
    {
        arr[k] = arr_right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r) //to stop the reccursion when there's only 1 element in the array
    {
        int mid = (l + r) / 2;

        mergeSort(arr, l, mid);     //merge left subarray
        mergeSort(arr, mid + 1, r); //merge right subarray

        merge(arr, l, mid, r);
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
    int arr[] = {5, 6, 9, 8, 12, 15, 12, 0, -1, 5, 4, 9, 78, 94, 10, -5, 0, 12, 5, 10};

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "INPUT:" << endl;
    print(arr, arr_size);

    auto start = high_resolution_clock::now();

    mergeSort(arr, 0, arr_size - 1);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);

    cout << "Time taken : "
         << duration.count() << " microseconds" << endl;

    cout << "OUTPUT:" << endl;
    print(arr, arr_size);
}