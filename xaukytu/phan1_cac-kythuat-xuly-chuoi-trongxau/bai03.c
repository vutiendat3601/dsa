#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void count(char s[])
{
    int i = 0;
    int numOfLetter = 0;
    int numOfNumber = 0;
    int numOfSymbol = 0;
    while (s[i] != '\0')
    {
        if ('0' <= s[i] && s[i] <= '9')
            numOfNumber++;
        else if (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z'))
            numOfLetter++;
        else
            numOfSymbol++;
        i++;
    }
    printf("%d %d %d", numOfLetter, numOfNumber, numOfSymbol);
}

int main()
{
    freopen("bai03.txt", "r", stdin);
    char s[1001];
    fgets(s,1001,stdin);
    count(s);
}