#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <queue>
#define MAX_N 1000

using namespace std;

int parent[MAX_N + 1];
bool visited[MAX_N + 1];
vector<int> g[MAX_N + 1];
vector<int> p;
int v;

void dfs(int i)
{
    visited[i] = true;
    for (int j : g[i])
    {
        if (!visited[j])
        {
            parent[j] = i;
            dfs(j);
        }
    }
}

void bfs(int i)
{
    queue<int> q;
    q.push(i);
    visited[i] = true;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        for (int j : g[temp])
        {
            if (!visited[j])
            {
                q.push(j);
                parent[j]= temp;
                visited[j] = true;
            }
        }
    }
}

void path(int s, int t)
{
    bfs(s);
    int cnt = 0;
    if (!visited[t])
        cout << "Khong co duong di" << endl;
    else
    {
        while (t != s)
        {
            p.push_back(t);
            t = parent[t];
        }
        p.push_back(s);
        reverse(p.begin(), p.end());
        for (int z : p)
            cout << z << " ";
        cout << endl;
    }
}

int main()
{
    freopen("timduongdikhongtrongso.txt", "r", stdin);
    cin >> v;
    cin.ignore();
    for (int i = 1; i <= v; i++)
    {
        string s, num;
        getline(cin, s);
        stringstream ss(s);
        while (ss >> num)
            g[i].push_back(stoi(num));
    }
    path(1, 5);
}