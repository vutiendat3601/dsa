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
    int column = 0;
    int max = 0;
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (isPrime(nums[j][i]))
                count++;
        }
        if (count > max)
        {
            max = count;
            column = i;
            count = 0;
        }
    }
    cout << column + 1 << endl;
    for (int i = 0; i < m; i++)
    {
        if (isPrime(nums[i][column]))
            cout << nums[i][column] << " ";
    }
    cout << endl;
}

int main()
{
    freopen("bai04.txt", "r", stdin);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> nums[i][j];
    }
    solve();
}