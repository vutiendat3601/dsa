#include <stdio.h>
#include <math.h>

#define MAX_N 10000000

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

void makeList(int left, int right)
{
    int count = 0;
    for (int i = left; i*i <= right; i++)
    {
        if (a[i])
            count++;
    }
    printf("%d\n", count);
}

int main()
{
    sieve();
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        makeList(a, b);
    }
}