#include <iostream>
using namespace std;
int vertArr[10][10];

void displayMatrix(int v)
{
    int i, j;
    for (int i = 1; i <= v; i++)
        i == 1 ? cout << "  " << i : cout << " " << i;
    cout << endl;

    for (i = 1; i <= v; i++)
    {
        cout << i << " ";

        for (j = 1; j <= v; j++)
        {
            cout << vertArr[i][j] << " ";
        }
        cout << endl;
    }
}
void addEdge(int u, int v)
{
    vertArr[u][v] = 1;
    vertArr[v][u] = 1;
}
main(int argc, char *argv[])
{
    int v = 8;

    addEdge(1, 2);
    addEdge(1, 3);

    addEdge(2, 3);
    addEdge(2, 4);
    addEdge(2, 5);

    addEdge(3, 5);
    addEdge(3, 7);
    addEdge(3, 8);

    addEdge(4, 5);

    addEdge(5, 6);

    addEdge(7, 8);

    displayMatrix(v);
}