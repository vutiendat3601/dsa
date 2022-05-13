#include <stdio.h>

#define ll long long

ll ucln(ll x, ll y)
{
    while (y != 0)
    {
        ll tmp = x;
        x = y;
        y = tmp % x;
    }
    return x;
}

ll bcnn(ll x, ll y)
{
    return x * y / ucln(x, y);
}

int main()
{
    ll a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld %lld", ucln(a, b), bcnn(a, b));
}