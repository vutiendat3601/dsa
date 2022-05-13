#include <stdio.h>

int sum(int x)
{
    if (x == 1)
        return 1;
    int sum = 0;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
            sum += (i + x / i);
    }
    return sum;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", sum(n));
    }
}