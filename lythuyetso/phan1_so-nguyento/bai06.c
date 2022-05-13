#include <stdio.h>

#define MAX_N 10000000

int a[MAX_N + 1];
int n;

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

void makeFirstPrimeList(int x)
{
    int j = 2;
    for (int i = 1; i <= x; i++)
    {
        while (!a[j])
            j++;
        printf("%d ", j++);
    }
    printf("\n");
}

int main()
{
    sieve();
    scanf("%d", &n);
    makeFirstPrimeList(n);
}