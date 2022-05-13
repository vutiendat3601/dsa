#include <stdio.h>
#include <string.h>

int main()
{
    freopen("bai01.txt", "r", stdin);
    char s[1001];
    fgets(s, 1001, stdin);
    char *c = strtok(s, " ");
    while (c != NULL)
    {
        printf("%s\n", c);
        c = strtok(NULL, " ");
    }
}