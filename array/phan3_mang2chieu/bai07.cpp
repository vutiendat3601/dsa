#include <iostream>
#define MAX_N 100

using namespace std;

int nums[MAX_N][MAX_N];
int n, m;
int r1, r2;

void solve()
{
    for (int i = 0; i < n; i++)
    {
        int temp = nums[r1][i];
        nums[r1][i] = nums[r2][i];
        nums[r2][i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << nums[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    freopen("bai07.txt", "r", stdin);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> nums[i][j];
    }
    cin >> r1 >> r2;
    r1--;
    r2--;
    solve();
}