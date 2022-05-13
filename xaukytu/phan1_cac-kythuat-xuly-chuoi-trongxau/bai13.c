#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void solve(char s[])
{
    int n = strlen(s);
    int count = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            count++;
            if (count > 1)
            {
                printf("NO\n");
                return;
            }
        }
    }
    printf("YES\n");
}

int main()
{
    freopen("bai13.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    scanf("\n");
    while (t--)
    {
        char s[1001];
        fgets(s, 1001, stdin);
        if (s[strlen(s) - 1] == '\n')
            s[strlen(s) - 1] = '\0';
        solve(s);
    }
}