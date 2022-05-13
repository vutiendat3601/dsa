#include <stdio.h>

int find(int x, int k)
{
    int count = 0;
    for (int i = 2; i * i <= x; i++)
    {
        while (x % i == 0)
        {
            count++;
            if (count == k)
                return i;
            x /= i;
        }
    }
    if (x != 1 && count == 2)
        return x;
    return -1;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", find(n, k));
}