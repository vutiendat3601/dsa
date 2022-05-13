#include <bits/stdc++.h>
#include <iostream>
#define MAX_N 1000

using namespace std;

int v, e;
int g[MAX_N + 1][MAX_N + 1];

int main()
{
    freopen("dscanhsangmatranke.txt", "r", stdin);
    cin >> v >> e;
    for (int i = 1; i <= e; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x][y] = g[y][x] = 1; // vo huong
        // g[x][y]=1; co huong
    }
    printf("  ");
    for (int i = 1; i <= v; i++)
        printf("%2d", i);
    printf("\n");
    for (int i = 1; i <= v; i++)
    {
        printf("%2d", i);
        for (int j = 1; j <= v; j++)
            printf("%2d", g[i][j]);
        printf("\n");
    }
}