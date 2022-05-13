#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void swap(char str[][1001], int i, int j)
{
    char temp[1001];
    strcpy(temp, str[i]);
    strcpy(str[i], str[j]);
    strcpy(str[j], temp);
}

void qSort(char str[][1001], int left, int right)
{
    if (left < right)
    {
        int i = left - 1;
        int j = left;
        while (j < right)
        {
            if (strcmp(str[j], str[right]) < 0)
            {
                i++;
                swap(str, i, j);
            }
           j++;
        }
         i++;
            swap(str, i, right);
            qSort(str, left, i - 1);
            qSort(str, i + 1, right);
    }
}

int main()
{
    freopen("bai04.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    scanf("\n");
    while (t--)
    {
        char s[1001];
        fgets(s, 1001, stdin);
        char str[100][1001];
        int i = 0;
        char *c = strtok(s, " ");
        while (c != NULL)
        {
            strcpy(str[i++], c);
            c = strtok(NULL, " ");
        }
        qSort(str,0,i-1);
        for (int j = 0; j < i; j++)
            printf("%s ", str[j]);
        printf("\n");
    }
}