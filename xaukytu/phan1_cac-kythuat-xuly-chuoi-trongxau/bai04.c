#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int ch[256];

void count(char s[])
{
    int i = 0;

    while (s[i] != '\0')
    {
        ch[s[i]]++;
        i++;
    }
    for (i = 0; i <= 255; i++)
    {
        if (ch[i])
            printf("%c %d\n", i, ch[i]);
    }
}

int main()
{
    freopen("bai04.txt", "r", stdin);
    char s[1001];
    fgets(s,1001,stdin);
    count(s);
}