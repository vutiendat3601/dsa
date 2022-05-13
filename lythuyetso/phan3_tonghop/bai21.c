#include <stdio.h>

int soThuanNghich(int x)
{
    int rev = 0;
    int tmp = x;
    while (tmp > 0)
    {
        rev = rev * 10 + tmp % 10;
        tmp /= 10;
    }
    return rev == x;
}

int hasDigit9(int x)
{
    while (x > 0)
    {
        if (x % 10 == 9)
            return 1;
        x /= 10;
    }
    return 0;
}

void lietKe(int x)
{
    int count = 0;
    for (int i = 2; i < x; i++)
    {
        if (soThuanNghich(i) && !hasDigit9(i))
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n%d", count);
}

int main()
{
    int n;
    scanf("%d", &n);
    lietKe(n);
}