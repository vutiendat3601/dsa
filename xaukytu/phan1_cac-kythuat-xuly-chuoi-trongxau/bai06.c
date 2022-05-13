#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int ch[256];

void count(char s[])
{
    int i = 0;
    int max = 0;
    int c = 0;
    char maxCh = '\0';
    while (s[i] != '\0')
    {
        ch[s[i]]++;
        if (ch[s[i]] >= max)
        {
            maxCh = s[i];
            max = ch[s[i]];
        }
        i++;
    }
    printf("%c\n", maxCh);
}

int main()
{
    freopen("bai06.txt", "r", stdin);
    char s[50001];
    fgets(s,50001,stdin);
    count(s);
}