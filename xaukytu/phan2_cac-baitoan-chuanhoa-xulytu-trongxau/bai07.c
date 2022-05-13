#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void toStdName(char name[])
{
    char res[1001] = "";
    char *c = strtok(name, " ");
    while (c != NULL)
    {
        char s[1001];
        strcpy(s, c);
        if ('a' <= s[0] && s[0] <= 'z')
            s[0] -= 32;
        int i = 1;
        while (s[i] != '\0')
        {
            if ('A' <= s[i] && s[i] <= 'Z')
                s[i] += 32;
            i++;
        }
        strcat(res, s);
        strcat(res, " ");
        c = strtok(NULL, " ");
    }
    printf("%s\n", res);
}

int main()
{
    freopen("bai07.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    scanf("\n");
    while (t--)
    {
        char s[1001];
        fgets(s, 1001, stdin);
        toStdName(s);
    }
}