#include <stdio.h>

int tongChuSo(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int isSmith(int x)
{
    int sum1 = tongChuSo(x);
    int sum2 = 0;
    int tmp = x;
    for (int i = 2; i * i <= x; i++)
    {
        while (tmp % i == 0)
        {
            sum2 += tongChuSo(i);
            tmp /= i;
        }
    }
    if (tmp == x)
        return 0;
    if (tmp != 1)
        sum2 += tongChuSo(tmp);
    return sum1 == sum2;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", isSmith(n));
    }
}