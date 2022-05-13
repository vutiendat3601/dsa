#include <stdio.h>

int phanTichThuaSoNT(int x)
{
    int ans;
    for (int i = 2; i * i <= x; i++)
    {
        while (x % i == 0)
        {
            ans = x;
            x /= i;
        }
    }
    if (x != 1)
        ans = x;
    return ans;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", phanTichThuaSoNT(n));
    }
}