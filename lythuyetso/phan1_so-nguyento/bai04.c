#include <stdio.h>

#define MAX_N 100000

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

int main()
{
    sieve();
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if (a[x])
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
}