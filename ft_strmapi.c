#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char    charmodify(unsigned int i, char c)
{
    if (i % 2 == 1)
    {
        return (c + 32);
    }
    return (c);
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *res;     

    i = 0;
    if (!s || !f)
        return (NULL);
    res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!res)
        return (NULL);
    while (s[i] != '\0')
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return (res);
}

int main(void)
{
    char    s[50] = "HELLO WORLD";

    printf("%s\n", ft_strmapi(s, charmodify));
}