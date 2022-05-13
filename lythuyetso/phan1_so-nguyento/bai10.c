#include <stdio.h>

int isPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return x > 1;
}

void makeList(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime(i))
            printf("%d ", i * i);
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        makeList(n);
    }
}