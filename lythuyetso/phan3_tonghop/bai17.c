#include <stdio.h>

int soLocPhat(int x)
{
    while (x > 0)
    {
        int tmp = x % 10;
        switch (tmp)
        {
        case 0:
        case 6:
        case 8:
            break;
        default:
            return 0;
        }
        x /= 10;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", soLocPhat(n));
}