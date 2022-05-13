#include <stdio.h>
#include <math.h>

#define MAX 25

int a[MAX + 1];

int nt(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return x > 1;
}

int sumDigits(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

void initFibo()
{
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i <= MAX; i++)
        a[i] = a[i - 2] + a[i - 1];
}

int findSumFibo(int x)
{
    for (int i = 0; i <= MAX; i++)
    {
        if (a[i] == x)
            return 1;
    }
    return 0;
}

void lietKe(int left, int right)
{
    int ok = 0; for (int i = left; i <= right; i++)
    {
        if (nt(i) && findSumFibo(sumDigits(i)))
        {
            printf("%d ", i);
            ok = 1;
        }
    }
    if (!ok)
        printf("-1");
}

int main()
{
    initFibo();
    int a, b;
    scanf("%d %d", &a, &b);
    lietKe(a, b);
}