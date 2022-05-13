#include <stdio.h>

int count(int x)
{
    int count = 0;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            count++;
            while (x % i == 0)
                x /= i;
        }
    }
    if (x != 1)
        count++;
    return count;
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