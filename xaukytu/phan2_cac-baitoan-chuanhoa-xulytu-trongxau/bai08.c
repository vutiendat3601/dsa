#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void toStdName(char name[])
{
    char res[100][1001];
    int count = 0;
    char *c = strtok(name, " ");
    while (c != NULL)
    {
        strcpy(res[count], c);
        if ('a' <= res[count][0] && res[count][0] <= 'z')
            res[count][0] -= 32;
        int i = 1;
        while (res[count][i] != '\0')
        {
            if ('A' <= res[count][i] && res[count][i] <= 'Z')
                res[count][i] += 32;
            i++;
        }
        count++;
        c = strtok(NULL, " ");
    }
    printf("%s, ", res[count - 1]);
    for (int i = 0; i < count - 1; i++)
        printf("%s ", res[i]);
    printf("\n");
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
        if (s[strlen(s) - 1] == '\n')
            s[strlen(s) - 1] = '\0';
        toStdName(s);
    }
}