#include <stdio.h>
#define MAX 10000

int a[MAX + 1];

void khoiTaoMang()
{
    for (int i = 0; i <= MAX; i++)
        a[i] = i;
}

void sang()
{
    for (int i = 2; i <= MAX; i++)
    {
        for (int j = i * i; j <= MAX; j += i)
        {
            if (a[j] = j)
                a[j] = i;
        }
    }
}

void phanTichThuaSoNT(int x)
{
    while (x != 1)
    {
        int count = 0;
        int tmp = a[x];
        while (x % tmp == 0)
        {
            x /= tmp;
            count++;
        }
        printf("%d(%d) ", tmp, count);
    }
}

int main()
{
    khoiTaoMang();
    sang();
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        phanTichThuaSoNT(n);
        printf("\n");
    }
}