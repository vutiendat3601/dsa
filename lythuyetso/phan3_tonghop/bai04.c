#include <stdio.h>
#include <math.h>

int count(int left, int right)
{
    int canLeft = sqrt(left);
    canLeft = (canLeft * canLeft < left) ? (canLeft + 1) : canLeft;
    int canRight = sqrt(right);
    return canRight - canLeft + 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", count(a, b));
    }
}