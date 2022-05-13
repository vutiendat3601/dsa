#include <stdio.h>
#include <math.h>

int chinhPhuong(long long x)
{
    int can2 = sqrt(x) + 0.5;
    if (1ll * can2 * can2 == x)
        return 1;
    return 0;
}

// chi co so chinh phuong moi cho so luong uoc so la le
int soUocLe(int x)
{
    return chinhPhuong(x);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", soUocLe(n));
    }
}