/*
Nama			: Ahmad Faaiz Al-auza'i
NPM				: 140810180023
Tanggal dibuat	: 08/03/2020
Deskripsi       : Studi kasus 2 - Algoritma Sequential Search
/***********************************************/

#include <iostream>
using namespace std;

int main()
{
    //input
    int num[] = {1, 5, 9, 87};
    int y = 9;

    int n = sizeof(num) / sizeof(num[0]);

    //algoritma
    int i = 1;
    bool found = false;

    while (i <= n && !found)
    {
        if (num[i - 1] == y)
            found = true;
        else
            i += 1;
    }

    int index;

    if (found)
        index = i;
    else
        index = 0;

    //output
    cout << "Index = " << index;
}