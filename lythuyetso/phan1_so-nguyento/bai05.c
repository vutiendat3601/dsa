#include <stdio.h>

int allDigitsIsPrime(int x)
{
    while (x > 0)
    {
        int d = x % 10;
        if (d != 2 && d != 3 && d != 5 && d != 7)
            return 0;
        x /= 10;
    }
    return 1;
}

int isPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return x > 1;
}

void makePrimeList(int left, int right)
{
    for (int i = left; i <= right; i++)
    {
        if (allDigitsIsPrime(i) && isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    makePrimeList(a, b);
}