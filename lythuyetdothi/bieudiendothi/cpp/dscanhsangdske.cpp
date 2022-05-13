#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX_N 1000

using namespace std;

int v, e;
vector<int> g[MAX_N + 1];

int main()
{
    freopen("../input/dscanhsangdske.txt", "r", stdin);
    cin >> v >> e;
    for (int i = 1; i <= e; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y); // only this if directed
        g[y].push_back(x); // add this if undirected
    }
    for (int i = 1; i <= v; i++)
    {
        cout << i << ": ";
        for (int j : g[i])
            cout << j << " ";
        cout << endl;
    }
}