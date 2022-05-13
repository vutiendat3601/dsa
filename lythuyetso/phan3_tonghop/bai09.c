#include <stdio.h>

int sumDigits(long long x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main()
{
    printf("%d\n", sumDigits(10000010));
}