#include <iostream>
#define MAX_N 100

using namespace std;
int nums1[MAX_N][MAX_N];
int nums2[MAX_N][MAX_N];

int n, m;

void solve()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << nums1[i][j] + nums2[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    freopen("bai16.txt", "r", stdin);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> nums1[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> nums2[i][j];
    }
    solve();
}