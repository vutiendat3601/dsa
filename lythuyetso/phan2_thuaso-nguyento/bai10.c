#include <stdio.h>

void lietKe(int left, int right)
{
    for (int i = left; i <= right; i++)
    {
        int tmp = i;
        for (int j = 2; j * j <= tmp; j++)
        {
            int flag = 0;
            int count = 0;
            while (tmp % j == 0)
            {
                count++;
                if (count == 2)
                {
                    printf("%d ", i);
                    flag = 1;
                }
                tmp /= j;
            }
            if (flag)
                break;
        }
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    lietKe(a, b);
}