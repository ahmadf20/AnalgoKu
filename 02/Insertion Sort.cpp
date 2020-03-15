/*
Nama			: Ahmad Faaiz Al-auza'i
NPM				: 140810180023
Tanggal dibuat	: 08/03/2020
Deskripsi       : Studi kasus 4 - Algoritma Insertion Sort
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
    for (int i = 1; i < n; i++)
    {

        insert = x[i];
        j = i - 1;

        while (j >= 0 && x[j] > insert)
        {
            x[j + 1] = x[j];
            j--;
        }
        x[j + 1] = insert;
    }

    //output
    for (int i = 0; i < n; i++)
        cout << x[i] << ' ';
}