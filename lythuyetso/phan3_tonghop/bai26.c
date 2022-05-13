#include <stdio.h>

void count(long long x)
{
    int cnt2 = 0;
    int cnt3 = 0;
    int cnt5 = 0;
    int cnt7 = 0;
    while (x > 0)
    {
        switch (x % 10)
        {
        case 2:
            cnt2++;
            break;
        case 3:
            cnt3++;
            break;
        case 5:
            cnt5++;
            break;
        case 7:
            cnt7++;
            break;
        }
        x /= 10;
    }
    if (cnt2)
        printf("2 %d\n", cnt2);
    if (cnt3)
        printf("3 %d\n", cnt3);
    if (cnt5)
        printf("5 %d\n", cnt5);
    if (cnt7)
        printf("7 %d\n", cnt7);
}

int main()
{
    long long n;
    scanf("%lld", &n);
    count(n);
}