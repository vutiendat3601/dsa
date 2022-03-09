#include <stdio.h>

int reverseNumber(int x)
{
    int res = 0;
    while (x > 0)
    {
        res = res * 10 + x % 10;
        x /= 10;
    }
    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", n == reverseNumber(n));
}