#include <stdio.h>

int ucln(int x, int y)
{
    if (y == 0)
        return x;
    return ucln(y, x % y);
}

void makeTogetherPrime(int left, int right)
{
    for (int i = left; i <= right - 1; i++)
    {
        for (int j = i + 1; j <= right; j++)
        {
            if (ucln(i, j) == 1)
                printf("(%d, %d)\n", i, j);
        }
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    makeTogetherPrime(a, b);
}