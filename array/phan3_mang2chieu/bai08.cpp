#include <iostream>
#define MAX_N 100

using namespace std;

int nums[MAX_N][MAX_N];
int n, m;
int c1, c2;

void solve()
{
    for (int i = 0; i < n; i++)
    {
        int temp = nums[i][c1];
        nums[i][c1] = nums[i][c2];
        nums[i][c2] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << nums[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    freopen("bai08.txt", "r", stdin);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> nums[i][j];
    }
    cin >> c1 >> c2;
    c1--;
    c2--;
    solve();
}