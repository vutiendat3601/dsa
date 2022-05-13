#include <stdio.h>

int thuanNghich(int x)
{
    int rs = 0;
    int tmp = x;
    while (tmp > 0)
    {
        rs = rs * 10 + tmp % 10;
        tmp /= 10;
    }
    return rs == x;
}

int count(int x)
{
    int count = 0;
    for (int i = 2; i * i <= x; i++)
    {
        if ((x % i == 0))
        {
            while (x % i == 0)
                x /= i;
            count++;
        }
    }
    if (x != 1)
        count++;
    return count;
}

void lietKe(int left, int right)
{
    int ok = 0;
    for (int i = left; i <= right; i++)
    {
        if (thuanNghich(i) && count(i) >= 3)
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
    int a, b;
    scanf("%d %d", &a, &b);
    lietKe(a,b);
}