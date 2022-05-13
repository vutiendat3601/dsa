#include <stdio.h>
#define MAX 10000

int uocSoNTNhoNhat(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return i;
    }
    return x;
}

int a[MAX + 1];

int khoiTaoMang()
{
    for (int i = 0; i <= MAX; i++)
        a[i] = i;
}

void sangSoNT()
{
    for (int i = 0; i <= MAX; i++)
        a[i] == i;

    for (int i = 2; i <= MAX; i++)
    {
        for (int j = i * i; j <= MAX; j += i)
            if (a[j] == j)
                a[j] = i;
    }
}

int main()
{
    khoiTaoMang();
    sangSoNT();
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
}