#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX_N 1000

using namespace std;

int v, e;
vector<int> g[MAX_N + 1];

int main()
{
    freopen("matrankesangdske.txt", "r", stdin);
    cin >> v;
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            int x;
            cin >> x;
            if (x)
                g[i].push_back(j);
        }
    }
    for (int i = 1; i <= v; i++)
    {
        cout << i << ": ";
        for (int j : g[i])
            cout << j << " ";
        cout << endl;
    }
}