#include <iostream>
#define MAX_N 100

using namespace std;

int a[MAX_N];
int n;

int sumDigits(int x)
{
    int sum = 0;
    x = abs(x);
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int cmp(const void *a, const void *b)
{
    int *x = (int *)a;
    int *y = (int *)b;
    if (*x % 2 == 0 && *y % 2 == 0)
        return -(*x - *y);
    if (*x % 2 != 0 && *y % 2 != 0)
        return *x - *y;
    if (*x % 2 == 0)
        return -1;
    return 1;
}

int main()
{
    freopen("bai0.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    qsort(a, n, sizeof(int), cmp);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}