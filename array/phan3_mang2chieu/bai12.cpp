#include <iostream>
#define MAX_N 100

using namespace std;
int nums[MAX_N][MAX_N];
int n;

void solve()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << nums[j][i] << " ";
        cout << endl;
    }
}

int main()
{
    freopen("bai12.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> nums[i][j];
    }
    solve();
}