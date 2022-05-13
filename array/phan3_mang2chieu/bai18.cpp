#include <iostream>
#define MAX_N 100

using namespace std;
int nums1[MAX_N][MAX_N];
int nums2[MAX_N][MAX_N];

int n, m, p;

void solve()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            int sum = 0;
            for (int k = 0; k < m; k++)
                sum += nums1[i][k] * nums2[k][j];
            cout << sum << " ";
        }
        cout << endl;
    }
}

int main()
{
    freopen("bai18.txt", "r", stdin);
    cin >> n >> m >> p;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> nums1[i][j];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
            cin >> nums2[i][j];
    }
    solve();
}