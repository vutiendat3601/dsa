#include <stdio.h>
#include <math.h>

#define MAX 59

unsigned long long a[MAX + 1];

// so hoan hao duoc sinh ra tu 2^(p-1) * (2^(p) - 1)
void luuMang()
{
    for (int i = 2; i <= MAX; i++)
    {
        a[i - 2] = (unsigned long long)(pow(2, i - 1) * (pow(2, i) - 1));
    }
}

int soHoanHao(unsigned long long x)
{
    for (int i = 0; i <= MAX; i++)
    {
        if (a[i] == x)
            return 1;
    }
    return 0;
}

int main()
{
    luuMang();
    printf("%d\n", soHoanHao(252));
}