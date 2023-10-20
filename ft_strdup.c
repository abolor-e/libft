/*
**SYNOPSIS: #include <string.h>
**DESCRIPTION: The strdup() allocates sufficient memory for a copy of the string s1
**, does the copy, and returns a pointer to it. The pointer may subsequently be used
**as an argument to the function free.
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(const char *s1)
{
    int len;
    int i;
    char    *res;

    len = 0;
    i = 0;
    while (s1[len] != '\0')
    {
        len++;
    }
    res = (char *)malloc(sizeof(char) * (i + 1));
    if (!res)
        return (NULL);
    while (s1[i] != '\0')
    {
        res[i] = s1[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

int main(void)
{
    char    s[50] = "Hello World!";
    char    *res;

    res = ft_strdup(s);
    printf("%s\n", res);
}