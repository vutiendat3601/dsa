#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int isUpr(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] < 'A' || 'Z' < s[i])
            return 0;
    }
    return 1;
}

int main()
{
    freopen("bai03.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    scanf("\n");
    while (t--)
    {
        char s[1001];
        fgets(s, 1001, stdin);
        char *c = strtok(s, " ");
        while (c != NULL)
        {
            if (isUpr(c))
                printf("%s ", c);
            c = strtok(NULL, " ");
        }
        printf("\n");
    }
}