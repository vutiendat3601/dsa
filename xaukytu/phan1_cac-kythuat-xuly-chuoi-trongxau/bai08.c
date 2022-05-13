#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int ch[256];

void solve(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] != '\0')
    {
        ch[s1[i]]++;
        i++;
    }
    i = 0;
    while (s2[i] != '\0')
    {
        if (ch[s2[i]])
            ch[s2[i]] = 0;
        i++;
    }

    for (i = 0; i <= 255; i++)
    {
        if (ch[i])
            printf("%c", i);
    }
    printf("\n");
}

int main()
{
    freopen("bai08.txt", "r", stdin);
    char s1[50001];
    char s2[50001];
    fgets(s1, 50001, stdin);
    fgets(s2, 50001, stdin);
    solve(s1, s2);
}