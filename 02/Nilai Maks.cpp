/*
Nama			: Ahmad Faaiz Al-auza'i
NPM				: 140810180023
Tanggal dibuat	: 08/03/2020
Deskripsi       : Studi kasus 1 - Algoritma Pencarian Nilai Maksimal 
/***********************************************/

#include <iostream>
using namespace std;

int main()
{

    //input
    int max;

    int num[] = {1, 5, 102, 8, 9, 87};
    int n = sizeof(num) / sizeof(num[0]);

    //algoritma
    max = num[0];
    int i = 2;

    while (i <= n)
    {
        if (num[i - 1] > max)
            max = num[i - 1];
        i += 1;
    }

    //output
    cout << "Max : " << max;
}