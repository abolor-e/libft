/*
**SYNOPSIS: #include <stdlib.h>
**DESCRIPTION: the atoi() function converts
**the initial portion of the string pointed
**by str to int representation
*/

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int i;
    int s;
    int res;

    s = 1;
    i = 0;
    res = 0;
    if (!str)
        return (-1);
    while (str[i] == '\n' || str[i] == '\t' || str[i] == ' ' || str[i] == '\v'|| str[i] == '\f' || str[i] == '\r')
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            s = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res * s);
}

int main(void)
{
    printf("%d\n", ft_atoi("12345"));
}