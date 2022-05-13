#include <stdio.h>

int nt(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return x > 1;
}
int soGiam(int x)
{
    int res = 1;
    while (x >= 10)
    {
        if (x % 10 < x / 10 % 10)
            x /= 10;
        else
        {
            res = 0;
            break;
        }
    }
    return res;
}
int soTang(int x)
{
    int res = 1;
    while (x >= 10)
    {
        if (x % 10 > x / 10 % 10)
            x /= 10;
        else
        {
            res = 0;
            break;
        }
    }
    return res;
}

int count(int x)
{
    if (x == 1)
        return 4;
    int base = 1;
    for (int i = 0; i < x - 1; i++)
        base *= 10;
    int count = 0;
    for (int i = base; i < base * 10; i++)
    {
        if (nt(i) && (soTang(i) || soGiam(i)))
            count++;
    }
    printf("%d", count);
}

int main()
{
   int n;
   scanf("%d", &n);
   count(n);
   printf("\n");
}