#include <stdio.h>

void lietKe(int left, int right)
{
    for (int i = left; i <= right; i++)
    {
        int tmp = i;
        for (int j = 2; j * j <= tmp; j++)
        {
            if (tmp % j == 0)
            {
                int count = 0;
                while (tmp % j == 0)
                {
                    count++;
                    tmp /= j;
                }
                if (count < 2)
                    break;
            }
            if (tmp == 1)
                printf("%d ", i);
        }
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    lietKe(a, b);
}