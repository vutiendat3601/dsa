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
}

void connectedComponent()
{
    int cnt = 0;
    for (int i = 1; i <= v; i++)
    {
        if (!visited[i])
        {
            cnt++;
            bfs(i);
        }
    }
    if (cnt == 1)
        cout << "Do thi lien thong";
    else
        cout << "Do thi khong lien thong";
    cout << endl;
}

int main()
{
    freopen("tplienthong.txt", "r", stdin);
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
    connectedComponent();
}