#include <stdio.h>
#include <math.h>

#define ll long long

ll luyThua1(int x, int y)
{
    ll res = 1;
    while (!(y == 0))
    {
        if (y % 2 != 1)
            res *= x;
        y /= 2;
        res *= x * x;
    }
    return res;
}

ll luyThua(int x, int y)
{
    if (y == 1)
        return x;
    if (y % 2 != 0)
        return luyThua(x, y / 2) * luyThua(x, y / 2) * x;
    else
        return luyThua(x, y / 2) * luyThua(x, y / 2);
}

int main()
{
    printf("%lld", luyThua1(2, 10));
}