#include <stdio.h>

void phanTichThuaSoNT1(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        while (x % i == 0)
        {
            x /= i;
            printf("%d ", i);
        }
    }
    if (x != 1)
        printf("%d", x);
}

void phanTichThuaSoNT2(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            printf("%d ", i);
            while (x % i == 0)
                x /= i;
        }
    }
    if (x != 1)
        printf("%d ", x);
}

void phanTichThuaSoNT3(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            printf("%d ", i);
            int count = 0;
            while (x % i == 0)
            {
                x /= i;
                count++;
            }
            printf("(%d) ", count);
        }
    }
    if (x != 1)
        printf("%d (1)", x);
}

void phanTichThuaSoNT4(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        while (x % i == 0)
        {
            x /= i;
            printf("%dx", i);
        }
    }
    if (x != 1)
        printf("%d", x);
}

void phanTichThuaSoNT5(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            printf("%d", i);
            int count = 0;
            while (x % i == 0)
            {
                x /= i;
                count++;
            }
            printf("^%d * ", count);
        }
    }
    if (x != 1)
        printf("%d^1", x);
}
int main()
{
    phanTichThuaSoNT1(2456);
    printf("\n");
    phanTichThuaSoNT2(2456);
    printf("\n");
    phanTichThuaSoNT3(2456);
    printf("\n");

    phanTichThuaSoNT4(2568);
    printf("\n");
    phanTichThuaSoNT5(76);
    printf("\n");
}