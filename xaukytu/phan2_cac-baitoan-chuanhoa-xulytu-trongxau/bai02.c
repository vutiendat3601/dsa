#include <stdio.h>
#include <string.h>

int main()
{
    freopen("bai02.txt", "r", stdin);
    char s[1001];
    fgets(s, 1001, stdin);
    char *c = strtok(s, " ");
    int count = 0;
    while (c != NULL)
    {
        count++;
        c = strtok(NULL, " ");
    }
    printf("%d\n", count);
}