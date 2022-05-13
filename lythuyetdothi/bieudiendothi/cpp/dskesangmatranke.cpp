#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#define MAX_N 1000

using namespace std;

int v, e;
int g[MAX_N + 1][MAX_N + 1];

int main()
{
    freopen("dskesangmatranke.txt", "r", stdin);
    cin >> v;
    cin.ignore();
    for (int i = 1; i <= v; i++)
    {
        string s, num;
        getline(cin,s);
        stringstream ss(s);
        while (ss >> num)
            g[i][stoi(num)] = 1;
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