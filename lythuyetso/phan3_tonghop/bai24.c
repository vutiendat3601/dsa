#include <stdio.h>

long long count(long long x)
{
    long long cnt = x;
    for (long long i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            cnt = cnt * (1 - (1.0 / i));
            do
            {
                x /= i;
            } while (x % i == 0);
        }
    }
    if (x != 1)
        cnt = cnt * (1 - (1.0 / x));
    return cnt;
}

// su dung Hàm phi Euler
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        printf("%lld\n", count(n));
    }
}