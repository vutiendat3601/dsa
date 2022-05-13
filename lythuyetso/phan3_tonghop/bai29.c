#include <stdio.h>

void veTamGiac(int x)
{
    int a[x + 1][x + 1];
    a[1][1] = 1;
    a[2][1] = a[2][2] = 1;
    for (int i = 3; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }
    for (int i = 1;i<=x;i++) {
        for (int j =1;j<=i;j++) 
            printf("%3d ", a[i][j]);
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    veTamGiac(n);
}