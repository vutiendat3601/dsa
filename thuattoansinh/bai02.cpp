#include <bits/stdc++.h>
#define MAX_N 1000

using namespace std;

int subSet[MAX_N + 1];
int n, k;

void swap(int i, int j)
{
    int temp = subSet[i];
    subSet[i] = subSet[j];
    subSet[j] = temp;
}

void solve()
{
    int i = k;
    while (i > 0 && subSet[i] == n - k + i)
        i--;
    if (i == 0)
    {
        for (i = 1; i <= k; i++)
            subSet[i] = i;
    }
    else
    {
        subSet[i]++;
        for (int j = i + 1; j <= k; j++)
            subSet[j] = subSet[j - 1] + 1;
    }
    for (i = 1; i <= k; i++)
        cout << subSet[i];
    cout << endl;
}

int main()
{
    freopen("bai02.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
            cin >> subSet[i];
        solve();
    }
}