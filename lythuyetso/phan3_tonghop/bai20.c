#include <stdio.h>
#include <math.h>

int countDigits(int x)
{
    int count = 0;
    while (x > 0)
    {
        count++;
        x /= 10;
    }
    return count;
}

int isArmstrongNumber(int x)
{
    int sum = 0;
    int numberOfDigit = countDigits(x);
    int tmp = x;
    while (tmp > 0)
    {
        sum += pow(tmp % 10, numberOfDigit);
        tmp /= 10;
    }
    return sum == x;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", isArmstrongNumber(n));
}