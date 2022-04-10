#include <bits/stdc++.h>

using namespace std;

vector<int> dske[101];
int visited[101];
int n, m;

void bfs(int u)
{
    queue<int> temp;
    temp.push(u);
    while (temp.size() != 0)
    {
        int v = temp.front();
        temp.pop();
        visited[v] = 1;
        cout << v << " ";
        for (int x : dske[v])
        {
            if (!visited[x])
            {
                temp.push(x);
            }
        }
    }
}

int main()
{
    freopen("../input/bfs.txt", "r", stdin);
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        dske[x].push_back(y);
        dske[y].push_back(x);
    }
    bfs(1);
}
