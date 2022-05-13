#include <stdio.h>

// phi ham Euler = n *(1-1/2)* (1-1/3)*....
void lietKe(int x)
{
    for (int i = 1; i <= x; i++)
    {
        int temp = i;
        int euler = i;

        for (int j = 2; j * j <= i; j++)
        {
            if (temp % j == 0)
            {
                euler *= (1 - 1.0 / j);
                while (temp % j == 0)
                    temp /= j;
            }
        }
        if (temp != 1)
            euler *= (1 - 1.0 / temp);
        printf("%d", euler);
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        lietKe(n);
        printf("\n");
    }
}