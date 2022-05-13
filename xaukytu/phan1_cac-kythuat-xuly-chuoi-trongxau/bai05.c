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
    i = 0;
    while (s[i] != '\0')
    {
        if (ch[s[i]])
        {
            printf("%c %d\n", s[i], ch[s[i]]);
            ch[s[i]] = 0;
        }
        i++;
    }
}

int main()
{
    freopen("bai05.txt", "r", stdin);
    char s[1001];
    fgets(s, 1001, stdin);
    count(s);
}