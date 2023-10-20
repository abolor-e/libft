#include "libft.h"
#include <stdio.h>

int ft_digits(int n)
{
    int i;

    i = 1;
    while (n /= 10)
    {
        i++;
    }
    return (i);
}

char    *ft_itoa(int n)
{
    char    *res;
    int     i;
    int     digits;

    i = n;
    digits = ft_digits(n);
    if (n < 0)
    {
        i *= -1;
        digits++;
    }
    res = (char *)malloc(sizeof(char) * (digits + 1));
    if (!res)
        return (NULL);
    *res = 0;
    while (digits--)
    {
        *(res + digits) = i % 10 + '0';
        i = i / 10;
    }
    if (n < 0)
        *(res + 0) = '-';
    return (res);
}

int main(void)
{
    printf("%s\n", ft_itoa(-1));
}