#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX_N 1000

using namespace std;

int v, e;
pair<int, int> g[MAX_N + 1];

int main()
{
    freopen("matrankesangdscanh.txt", "r", stdin);
    cin >> v;
    int cnt = 0;
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            int x;
            cin >> x;
            if (x && i < j)
                g[cnt++] = {i, j};
        }
    }
    for (int i = 0; i < cnt; i++)
        cout << g[i].first << " " << g[i].second << endl;
}