#include <iostream>
#define MAX_N 100

using namespace std;
int nums[MAX_N][MAX_N];

int n, m;

void solve()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for (int k = 0; k < m; k++)
                sum += nums[i][k] * nums[j][k];
            cout << sum << " ";
        }
        cout << endl;
    }
}

int main()
{
    freopen("bai19.txt", "r", stdin);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> nums[i][j];
    }
    solve();
}