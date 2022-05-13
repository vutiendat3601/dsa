#include <stdio.h>

int count(int x)
{
    int bac5 = 0;
    int tmp = 5;
    while (tmp <= x)
    {
        bac5 += x / tmp;
        tmp *= 5;
    }
    return bac5;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", count(n));
    }
}