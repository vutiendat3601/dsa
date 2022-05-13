#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void swap(char str[], int i, int j)
{
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}

void qSort(char str[], int left, int right)
{
    if (left < right)
    {
        int i = left - 1;
        int j = left;
        while (j < right)
        {
            if (str[j] - str[right] < 0)
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
    freopen("bai06.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    scanf("\n");
    while (t--)
    {
        char s[1001];
        fgets(s, 1001, stdin);
        qSort(s, 0, strlen(s) - 1);
        printf("%s\n", s);
    }
}