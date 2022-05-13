#include <stdio.h>

int isSphenic(int x)
{
    int count = 0;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            if (x / i % i == 0)
                return 0;
            count++;
            x /= i;
        }
    }
    return count == 2;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", isSphenic(n));
    }
}