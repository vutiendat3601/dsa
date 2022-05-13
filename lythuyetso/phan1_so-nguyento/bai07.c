#include <stdio.h>

#define N_MAX 10000

int a[N_MAX + 1];

void sangSoNT()
{
    for (int i = 2; i <= N_MAX; i++)
        a[i] = 1;

    for (int i = 2; i * i <= N_MAX; i++)
    {
        if (a[i])
        {
            for (int j = i * i; j <= N_MAX; j += i)
                a[j] = 0;
        }
    }
}

void lietKe(int n)
{
    for (in t i = 2; i <= n / 2; i++)
    {
        if (a[i] && a[n - i])
            printf("%d %d\n", i, n - i);
    }
}

int main()
{
    sangSoNT();
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        lietKe(n);
    }
}