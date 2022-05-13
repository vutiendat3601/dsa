#include <stdio.h>

void countChanLe(int x)
{
    int countLe = 0;
    int count = 0;
    while (x > 0)
    {
        count++;
        int tmp = x % 10;
        if (tmp % 2 != 0)
            countLe++;
        x /= 10;
    }
    printf("%d %d\n", countLe, count - countLe);
}

int main()
{
    int n;
    scanf("%d", &n);
    countChanLe(n);
}