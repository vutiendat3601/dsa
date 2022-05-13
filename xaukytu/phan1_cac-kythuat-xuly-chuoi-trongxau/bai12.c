#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void solve(char s[])
{
    printf("%d\n", strlen(s));
    printf("%c\n", s[strlen(s) - 1]);
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main()
{
    freopen("bai12.txt", "r", stdin);
    char s[1001];
    fgets(s, 1001, stdin);
    solve(s);
}