#include <iostream>
#define MAX_N 100

using namespace std;
int nums[MAX_N][MAX_N];
int n;

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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(nums[i][i]))
            count++;
        if (isPrime(nums[i][n - 1 - i]))
            count++;
    }
    if (isPrime(nums[n / 2][n / 2]))
        count--;

    cout << count << endl;
}

int main()
{
    freopen("bai10.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> nums[i][j];
    }
    solve();
}