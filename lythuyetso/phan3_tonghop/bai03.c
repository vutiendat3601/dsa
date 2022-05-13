#include <stdio.h>
#include <math.h>

int lietKe(int left, int right)
{
    int canLeft = sqrt(left);
    int canRight = sqrt(right);
    for (int i = (canLeft * canLeft < left) ? (canLeft + 1) : canLeft; i <= canRight; i++)
    {
        printf("%d ", i * i);
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        lietKe(a, b);
        printf("\n");
    }
}