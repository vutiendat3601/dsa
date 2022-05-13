#include <bits/stdc++.h>
#include <vector>
#include <string>
#define MAX_N 1000

using namespace std;

vector<int> g[MAX_N + 1];
bool visited[MAX_N + 1];
int v;

void dfs(int i)
{
    cout << i << " ";
    visited[i] = true;
    for (int j : g[i])
    {
        if (!visited[j])
            dfs(j);
    }
}

int main()
{
    freopen("../input/dfs.txt", "r", stdin);
    cin >> v;
    cin.ignore();
    for (int i = 1; i <= v; i++)
    {
        string s, num;
        getline(cin, s);
        stringstream ss(s);
        while (ss >> num)
        {
            int tNum = stoi(num);
            g[i].push_back(tNum);
        }
    }
    dfs(1);
}