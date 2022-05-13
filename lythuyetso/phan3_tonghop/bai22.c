#include <stdio.h>

int soNguyenTo(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return x > 1;
}

int isLastDigitBiggest(int x)
{
    int max = x % 10;
    x /= 10;
    while (x > 0)
    {
        if (x % 10 > max)
            return 0;
        x /= 10;
    }
    return 1;
}

void lietKe(int x)
{
    int count = 0;
    for (int i = 2; i < x; i++)
    {
        if (soNguyenTo(i) && isLastDigitBiggest(i))
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