#include <stdio.h>
#include <string.h>

#define MAX_N 1000000

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

int main()
{
    scanf("%d", &n);
    sieve();
    for (int  i=1;i<=n; i++) {
        if (a[i]) printf("%d ", i);
    }
}