#include <stdio.h>

int soNT(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return x > 1;
}

int max(int x, int y)
{
    return x > y ? x : y;
}

void sieve(int left, int right)
{
    int a[right - left + 1];
    for (int i = 0; i <= right - left + 1; i++)
        a[i] = 1;

    for (int i = 2; i * i <= right; i++)
    {
        if (soNT(i))
        {
            for (int j = max((left + i - 1) / i * i, i * i); j <= right; j += i)
                a[j - left] = 0;
        }
    }
    for (int i = 0; i <= right - left; i++)
    {
        if (a[i])
            printf("%d ", left + i);
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sieve(a, b);
}