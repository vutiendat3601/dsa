#include <iostream>
#define MAX_N 100

using namespace std;

int nums[MAX_N][MAX_N];
int n, m;

int isPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return x > 1;
}

void solve()
{
    int row = 0;
    int max = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < m; j++)
        {
            if (isPrime(nums[i][j]))
                count++;
        }
        if (count > max)
        {
            max = count;
            row = i;
            count = 0;
        }
    }
    cout << row+1 + 1 << endl;
    for (int i = 0; i < m; i++)
    {
        if (isPrime(nums[row][i]))
            cout << nums[row][i] << " ";
    }
    cout << endl;
}

int main()
{
    freopen("bai03.txt", "r", stdin);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> nums[i][j];
    }
    solve();
}