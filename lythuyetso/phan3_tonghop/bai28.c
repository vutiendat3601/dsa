#include <stdio.h>
#include <math.h>

int ucln(int x, int y)
{
    if (y == 0)
        return x;
    return ucln(y, x % y);
}

int bcnn(int x, int y)
{
    return (x * y) / ucln(x, y);
}

int find(int x, int y, int z, int n)
{
    int boiChungNN = (bcnn(x, y) * z) / ucln(bcnn(x, y), z);
    int minNumber = pow(10, n - 1);
    int res = (minNumber + boiChungNN - 1) / boiChungNN * boiChungNN;
    return (res < pow(10, n)) ? res : -1;
}

int main()
{
    int x, y, z, n;
    scanf("%d %d %d %d", &x, &y, &z, &n);
    printf("%d", find(x, y, z, n));
}