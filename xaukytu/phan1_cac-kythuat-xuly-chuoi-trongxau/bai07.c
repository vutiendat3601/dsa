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
        {
            printf("%c", s2[i]);
            ch[s2[i]] = 0;
        }
        i++;
    }
}

int main()
{
    freopen("bai07.txt", "r", stdin);
    char s1[50001];
    char s2[50001];
    fgets(s1, 50001, stdin);
    fgets(s2, 50001, stdin);
    solve(s1,s2);
}