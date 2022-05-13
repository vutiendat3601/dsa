#include <iostream>
#define MAX_N 100

using namespace std;
int nums[MAX_N][MAX_N];
int primes[MAX_N + 1];
int n;

void sieve()
{
    for (int i = 0; i <= MAX_N; i++)
        primes[i] = 1;
    primes[0] = primes[1] = 0;
    for (int i = 2; i * i <= MAX_N; i++)
    {
        for (int j = i * i; j <= MAX_N; j += i)
            primes[j] = 0;
    }
}

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
    sieve();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (primes[nums[i][i]])
        {
            count++;
            primes[nums[i][i]] = 0;
        }
        if (primes[nums[i][n - 1 - i]])
        {
            count++;
            primes[nums[i][n - 1 - i]] = 0;
        }
    }

    cout << count << endl;
}

int main()
{
    freopen("bai11.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> nums[i][j];
    }
    solve();
}