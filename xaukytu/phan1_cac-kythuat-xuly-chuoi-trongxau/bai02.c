#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char *toLower(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        if ('A' <= s[i] && s[i] <= 'Z')
            s[i] += 32;
            i++;
    }
    return s;
}

int main()
{
    freopen("bai02.txt", "r", stdin);
    char s[1001];
    fgets(s, 1001, stdin);
    toLower(s);
    printf("%s", s);
}