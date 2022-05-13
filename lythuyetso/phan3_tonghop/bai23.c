#include <stdio.h>

int UCLN(int x, int y)
{
    if (y == 0)
        return x;
    return UCLN(y, x % y);
}

int isTogetherPrime(int x, int y)
{
    return UCLN(x, y) == 1;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (isTogetherPrime(a, b))
        printf("YES\n");
    else
        printf("NO");
}