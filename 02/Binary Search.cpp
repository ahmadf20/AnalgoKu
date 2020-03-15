/*
Nama			: Ahmad Faaiz Al-auza'i
NPM				: 140810180023
Tanggal dibuat	: 08/03/2020
Deskripsi       : Studi kasus 3 - Algoritma Binary Search
/***********************************************/

#include <iostream>
using namespace std;

int main()
{
    //input
    int x[] = {1, 5, 9, 87};
    int y = 9;

    int n = sizeof(x) / sizeof(x[0]);

    //algoritma
    int i = 0;
    int j = n;
    bool found = false;

    int mid;

    while (!found && i < j)
    {
        mid = (i + j) / 2;
        if (x[mid == y])
        {
            found = true;
        }
        else
        {
            if (x[mid] < y)
                i = mid + 1;
            else
                j = mid - 1;
        }
    }

    int index;

    if (found)
        index = mid + 1;
    else
        index = 0;

    //output
    cout << "Index = " << index;
}