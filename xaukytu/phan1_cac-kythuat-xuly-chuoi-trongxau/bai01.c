#include <stdio.h>

int is_lower(char c)
{
    return 'a' <= c && c <= 'z';
}

int is_upper(char c)
{
    return 'A' <= c && c <= 'Z';
}

int is_alpha(char c)
{
    return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
}

int is_digit(char c)
{
    return '0' <= c <= '9';
}

char to_lower(char c)
{
    if ('A' <= c <= 'Z')
        c += 32;
    return c;
}

char to_upper(char c)
{
    if ('a' <= c <= 'z')
        c -= 32;
    return c;
}

int str_len(char c[])
{
    int count = 0;
    while (c[count] != '\0')
        count++;
    return count;
}

char *strlwr(char c[])
{
    int i = 0;
    while (c[i] != '\0')
    {
        if ('A' <= c[i] && c[i] <= 'Z')
            c[i] += 32;
        i++;
    }
    return c;
}

char *strupr(char c[])
{
    int i = 0;
    while (c[i] != '\0')
    {
        if ('a' <= c[i] && c[i] <= 'z')
            c[i] -= 32;
        i++;
    }
    return c;
}

int min(int x, int y)
{
    return x < y ? x : y;
}

int strcmp(char str1[], char str2[])
{
    int n = min(str_len(str1), str_len(str2));
    int i = 0;
    while (i < n)
    {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    return str_len(str1) - str_len(str2);
}

int strcmpi(char str1[], char str2[])
{
    strlwr(str1);
    strlwr(str2);
    printf("%s\n", str1);
    printf("%s\n", str2);

    return strcmp(str1, str2);
}

int main()
{
    
}