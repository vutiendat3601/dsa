#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#define MAX_N 1000

using namespace std;

int v, e;
pair<int, int> g[MAX_N + 1];

int main()
{
    freopen("dskesangmatranke.txt", "r", stdin);
    cin >> v;
    cin.ignore();
    int cnt = 0;
    for (int i = 1; i <= v; i++)
    {
        string s, num;
        getline(cin, s);
        stringstream ss(s);
        while (ss >> num)
        {
            int tNum = stoi(num);
            if (i < tNum)
                g[cnt++] = {i, tNum};
        }
    }
    for (int i = 0; i < cnt; i++)
        cout << g[i].first << " " << g[i].second << endl;
}