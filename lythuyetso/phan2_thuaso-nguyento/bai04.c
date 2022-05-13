#include <stdio.h>

// Công Thức Legendre
int count(int x, int p)
{
    int count = 0;
    int i = p;
    while (i <= x)
    {
        count += x / i;
        i *= p;
    }
    return count;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, p;
        scanf("%d %d", &n, &p);
        printf("x = %d\n", count(n, p));
    }
}