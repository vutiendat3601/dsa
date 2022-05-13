#include <stdio.h>

#define MAX_N 1000000

int a[MAX_N + 1];

void sieve()
{
    for (int i = 0; i <= MAX_N; i++)
        a[i] = 1;
    a[0] = a[1] = 0;
    for (int i = 2; i * i <= MAX_N; i++)
    {
        if (a[i])
        {
            for (int j = i * i; j <= MAX_N; j += i)
                a[j] = 0;
        }
    }
}

int allDigitIsPrime(int x)
{
    while (x > 0)
    {
        int r = x % 10;
        if (!a[r])
            return 0;
        x /= 10;
    }
    return 1;
}

int sumDigitsIsPrime(int x)
{
    int sum = 0;
    while (x > 0)

    {
        sum += x % 10;
        x /= 10;
    }
    return a[sum] != 0;
}

void soThuanNT(int left, int right)
{
    for (int i = left; i <= right; i++)
    {
        if (allDigitIsPrime(i) && sumDigitsIsPrime(i) && a[i])
            printf("%d ", i);
    }
}

int main()
{
    sieve();
    // printf("%d", allDigitIsPrime(237));
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        soThuanNT(a, b);
    }
}