#include <stdio.h>

int factorial[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

int isStrongNumber(int x)
{
    int sum = 0;
    int tmp = x;
    while (tmp > 0)
    {
        sum += factorial[tmp % 10];
        tmp /= 10;
    }
    return sum == x;
}

void lietKe(int left, int right)
{
    int ok = 0;
    for (int i = left; i <= right; i++)
    {
        if (isStrongNumber(i))
        {
            printf("%d ", i);
            ok = 1;
        }
    }
    if (!ok)
        printf("-1");
}

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    lietKe(a,b);
}