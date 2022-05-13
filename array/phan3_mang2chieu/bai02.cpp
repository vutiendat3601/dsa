#include <iostream>
#define MAX_N 100

using namespace std;

int nums[MAX_N][MAX_N];
int n, m;

void solve()
{
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
            sum += nums[j][i];
        cout << sum << endl;
        ;
    }
}

int main()
{
    freopen("bai02.txt", "r", stdin);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> nums[i][j];
    }
    solve();
}