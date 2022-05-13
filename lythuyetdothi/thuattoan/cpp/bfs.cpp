#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <queue>
#define MAX_N 1000

using namespace std;

vector<int> g[MAX_N + 1];
bool visited[MAX_N + 1];
int v;

void bfs(int i)
{
    queue<int> q;
    q.push(i);
    visited[i] = true;
    while (!q.empty())
    {
        int temp = q.front();
        cout << temp << " ";
        q.pop();
        for (int j : g[temp])
        {
            if (!visited[j])
            {
                q.push(j);
                visited[j] = true;
            }
        }
    }
    cout << endl;
}

int main()
{
    freopen("../input/bfs.txt", "r", stdin);
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
    bfs(1);
}