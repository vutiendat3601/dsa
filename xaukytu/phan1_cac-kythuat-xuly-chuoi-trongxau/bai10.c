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

    for (i = 97; i <= 122; i++)
    {
        if (!ch[i])
            break;
    }
    if (i == 123)
        printf("YES\n");
    else
        printf("NO\n");
}

int main()
{
    freopen("bai10.txt", "r", stdin);
    char s[50001];
    fgets(s, 50001, stdin);
    solve(s);
}