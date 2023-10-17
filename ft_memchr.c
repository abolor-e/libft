/*
**SYNOPSIS: #include <string.h>
**DESCRIPTION: The memchr function locates the first occurence
**of c (converted to an unsigned char) in string s.
**RETURN VALUES: The memchr returns a pointer to the byte located,
**or NULL if no such byte exists within n bytes.
*/

#include <string.h>
#include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *str;
    size_t          i;

    i = 0;
    str = (unsigned char *)s;
    c = (unsigned char)c;
    while (i < n)
    {
        if (str[i] == c)
            return ((void *)str + i);
        i++;
    }
    return (0);
}

int main(void)
{
    int c;
    char    s[50] = "Hello World!";
    char    *res;

    c = 'e';
    res = ft_memchr(s, c, 2);
    printf("%s\n", res);
}