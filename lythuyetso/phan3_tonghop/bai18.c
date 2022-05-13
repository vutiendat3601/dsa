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

int hasDigit6(int x)
{
    while (x > 0)
    {
        if (x % 10 == 6)
            return 1;
        x /= 10;
    }
    return 0;
}

int sumDigit(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int isThuanNghichVaLocPhat(int x)
{
    if (thuanNghich(x) && hasDigit6(x) && (sumDigit(x) % 10 == 8))
        return 1;
    return 0;
}

void lietKe(int left, int right)
{
    for (int i = left; i <= right; i++)
    {
        if (isThuanNghichVaLocPhat(i))
            printf("%d ", i);
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    lietKe(a,b);
}