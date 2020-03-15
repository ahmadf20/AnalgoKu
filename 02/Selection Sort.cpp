/*
Nama			: Ahmad Faaiz Al-auza'i
NPM				: 140810180023
Tanggal dibuat	: 08/03/2020
Deskripsi       : Studi kasus 5 - Algoritma Selection Sort
/***********************************************/

#include <iostream>
using namespace std;

int main()
{
    //input
    int x[] = {8, 7, 102, 2, 1, 0};

    int n = sizeof(x) / sizeof(x[0]);

    int j, insert;

    //algoritma
    for (int i = n - 1; i > 0; i--)
    {

        int imaks = 0;
        for (int j = 1; j < i; j++)
        {
            if (x[j] > x[imaks])
            {
                imaks = j;
            }
        }
        int temp = x[i];
        x[i] = x[imaks];
        x[imaks] = temp;
    }

    //output
    for (int i = 0; i < n; i++)
        cout << x[i] << ' ';
}