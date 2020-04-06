#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u - 1].push_back(v);
    adj[v - 1].push_back(u);
}

void printList(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << v + 1 << ": head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        printf("\n");
    }
}

int main()
{
    int V = 8;
    vector<int> adj[V];

    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);

    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 2, 5);

    addEdge(adj, 3, 5);
    addEdge(adj, 3, 7);
    addEdge(adj, 3, 8);

    addEdge(adj, 4, 5);

    addEdge(adj, 5, 6);

    addEdge(adj, 7, 8);

    printList(adj, V);
    return 0;
}