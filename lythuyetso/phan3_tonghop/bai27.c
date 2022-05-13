#include <stdio.h>

long long rev(long long x)
{
    long long res = 0;
    while (x > 0)
    {
        res = res * 10 + x % 10;
        x /= 10;
    }
    return res;
}

void count(long long x)
{
    long long tmp = x;
    int cnt2, cnt3, cnt5, cnt7;
    cnt2 = cnt3 = cnt5 = cnt7 = 0;

    while (tmp > 0)
    {
        if (tmp % 10 == 2)
            cnt2++;
        if (tmp % 10 == 3)
            cnt3++;
        if (tmp % 10 == 5)
            cnt5++;
        if (tmp % 10 == 7)
            cnt7++;
        tmp /= 10;
    }
    tmp = rev(x);
    while (tmp > 0)
    {
        if (tmp % 10 == 2 && cnt2)
        {
            printf("2 %d\n", cnt2);
            cnt2 = 0;
        }
        if (tmp % 10 == 3 && cnt3)
        {
            printf("3 %d\n", cnt3);
            cnt3 = 0;
        }
        if (tmp % 10 == 5 && cnt5)
        {
            printf("5 %d\n", cnt5);
            cnt5 = 0;
        }
        if (tmp % 10 == 7 && cnt7)
        {
            printf("7 %d\n", cnt7);
            cnt7 = 0;
        }
        if (!cnt2 && !cnt3 && !cnt5 && !cnt7)
            break;
        tmp /= 10;
    }
}

int main()
{
    long long n;
    scanf("%lld", &n);
    count(n);
}