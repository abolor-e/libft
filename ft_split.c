/*
#include "libft.h"

int ft_check(char c, char a)
{
    if (c == a)
        return (1);
    return (0);
}

int ft_s2len(char const *s, char c)
{
    int i;
    int a;

    i = 0;
    a = 0;
    while (s[i] != '\0')
    {
        while (ft_check(s[i], c) && s[i])
            i++;
        if (s[i] && !ft_check(s[i], c))
        {
            while (s[i] && !ft_check(s[i], c))
            {
                i++;
            }
            a++;
        }
    }
    return (a);
}

char    *ft_strdups(char const *s, char c)
{
    int i;
    char    *res;

    i = 0;
    while (s[i] && !ft_check(s[i], c))
        i++;
    res = (char *)malloc(sizeof(char) * (i + 1));
    if (!res)
        return (0);
    i = 0;
    while (s[i] && !ft_check(s[i], c))
    {
        res[i] = s[i];
        i++;
    }
    return (res);
}

char    **ft_split(char const *s, char c)
{
    char    **res;
    int     i;

    res = malloc(sizeof(char) * (ft_s2len(s, c) + 1));
    i = 0;
    if (!res)
        return (0);
    while (*s)
    {
        while (*s && ft_check(*s, c))
            s++;
        if (*s && !ft_check(*s, c))
        {
            res[i] = ft_strdups(s, c);
            i++;
            while (*s && !ft_check(*s, c))
                s++;
        }
    }
    return (res);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        printf("%c\n", **ft_split(av[1], *av[2]));
    }
}
*/