#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int ch[256];

void solve(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        ch[s[i]]++;
        i++;
    }

    for (i = 65; i <= 90; i++)
    {
        if (!ch[i] && !ch[i + 32])
            break;
    }
    if (i == 91)
        printf("YES\n");
    else
        printf("NO\n");
}

int main()
{
    freopen("bai11.txt", "r", stdin);
    char s[50001];
    fgets(s, 50001, stdin);
    solve(s);
}