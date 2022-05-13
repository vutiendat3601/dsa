#include <stdio.h>

int count(int x)
{
    if (x == 1)
        return 1;
    int count = 0;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            printf("%d %d ", i, x / i);
            count += 2;
        }
        if (x / i == i)
            count--;
    }
    printf("\n");
    return count;
}
// 2^x.3^y.5^z..... -> tong so uoc = (x+1).(y+1).(z+1)
int count2(int x)
{
    int res = 1;
    for (int i = 2; i * i <= x; i++)
    {
        int count = 0;
        while (x % i == 0)
        {
            count++;
            x /= i;
        }
        res *= count + 1;
    }
    if (x != 1)
        res *= 2;
    return res;
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