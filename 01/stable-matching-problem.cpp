/*
Nama			: Ahmad Faaiz Al-auza'i
NPM				: 140810180023
Tanggal dibuat	: 01/03/2020
Deskripsi       : Gale Shapley Algoritm
/***********************************************/
#include <iostream>

using namespace std;

int main()
{
    int n = 5; //number of available men/women

    string men[n] = {"victor", "wyatt", "xavier", "yancey", "zeus"};
    string women[n] = {"amy", "bertha", "clare", "diane", "erika"};

    int mPref[n][n] = {
        {1, 0, 3, 4, 2},
        {3, 1, 0, 2, 4},
        {1, 4, 2, 3, 1},
        {0, 3, 2, 1, 4},
        {1, 3, 1, 4, 2},
    };
    int wPref[n][n] = {
        {4, 0, 1, 3, 2},
        {2, 1, 3, 0, 4},
        {1, 2, 3, 4, 0},
        {0, 4, 3, 2, 1},
        {3, 1, 4, 2, 0},
    };

    int mPartner[n] = {-1, -1, -1, -1, -1}; //-1 means free
    int wPartner[n] = {-1, -1, -1, -1, -1};

    int freeCount = n;

    //while there is a man who is free and hasnt proposed to every woman
    while (freeCount >= 0)
    {
        for (int m = 0; m < n; m++)
        {

            if (mPartner[m] != -1) //if m has engaged to w, pass
                continue;

            bool stopScanning = false;

            //choose such a man (m)
            //let w be the higest-ranked woman in m's preference list to whom m has not yet proposed
            for (int w = 0; w < n; w++) // loop through mPref
            {
                if (mPref[m][w] == -1) //if w has rejected m, pass
                    continue;

                //if w is free
                if (wPartner[mPref[m][w]] == -1)
                {
                    mPartner[m] = mPref[m][w];
                    wPartner[mPref[m][w]] = m;
                    break;
                }
                //else w is currently engaged to m'
                else
                {
                    int currentMan = m;                         //(m)
                    int currentPartner = wPartner[mPref[m][w]]; //(m')

                    //find index of (m) and (m') in the wPref list to show the who is more prefered
                    for (int i = 0; i < n; i++)
                    {
                        //if w prefers m' to m (current partner)
                        if (wPref[mPref[m][w]][i] == currentPartner) //(m') came up first
                        {
                            //m remains free
                            mPref[m][w] = -1; //blacklist w
                            stopScanning = true;
                            break;
                        }
                        //if w prefers m to m'
                        if (wPref[mPref[m][w]][i] == currentMan)
                        {
                            //(m,w) become enganged
                            mPartner[m] = mPref[m][w];
                            wPartner[mPref[m][w]] = m;
                            //m' becomes free
                            mPartner[currentPartner] = -1;
                            mPref[currentPartner][w] = -1; //blacklist w
                            stopScanning = true;
                            break;
                        }
                    }
                }
                if (stopScanning)
                    break;
            }
        }
        freeCount--;
    }

    //print solution
    cout << "Man\tWoman" << endl;
    for (int i = 0; i < n; i++)
        cout << men[i] << "\t" << women[mPartner[i]] << endl;
}