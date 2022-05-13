#include <stdio.h>

//  x_max = 92
void fibo(int x)
{
    long long fibo_2 = 0;
    long long fibo_1 = 1;
    for (int i = 2; i <= x; i++)
    {
        long long fibo_n = fibo_2 + fibo_1;
        printf("%lld ", fibo_n);
        fibo_2 = fibo_1;
        fibo_1 = fibo_n;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    fibo(n);
}