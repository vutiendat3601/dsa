#include <iostream>
#define MAX_N 10

using namespace std;
int nums[MAX_N][MAX_N];
int n;
int primes[MAX_N * MAX_N];

int isPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return x > 1;
}

void makePrimes()
{
    int count = 0;
    int i = 2;
    while (count < MAX_N * MAX_N)
    {
        if (isPrime(i))
            primes[count++] = i;
        i++;
    }
}

void solve()
{
    int i = 0;
    int rT = 0;
    int rB = n - 1;
    int cL = 0;
    int cR = n - 1;
    while (i < n * n)
    {
        for (int j = cL; j <= cR; j++)
            nums[rT][j] = primes[i++];
        rT++;
        for (int j = rT; j <= rB; j++)
            nums[j][cR] = primes[i++];
        cR--;
        for (int j = cR; j >= cL; j--)
            nums[rB][j] = primes[i++];
        rB--;
        for (int j = rB; j >= rT; j--)
            nums[j][cL] = primes[i++];
        cL++;
    }
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << nums[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    makePrimes();
    freopen("bai22.txt", "r", stdin);
    cin >> n;
    solve();
}