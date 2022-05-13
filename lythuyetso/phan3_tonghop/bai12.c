#include <stdio.h>

#define MAX 92

long long a[MAX + 1];

void initFibo()
{
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i <= MAX; i++)
        a[i] = a[i - 2] + a[i - 1];
}

int findFibo(long long x)
{
    for (int i = 0; i <= MAX; i++)
    {
        if (a[i] == x)
            return 1;
    }
    return 0;
}

int main()
{
    initFibo();
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        if (findFibo(n))
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
}