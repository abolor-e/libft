#include "libft.h"
#include <stdio.h>

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;

    i = 0;
    if (!s || !f)
        return ;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}

void modifychar(unsigned int index, char *c) 
{
    if (*c >= 65 && *c <= 90)
        *c = *c - 'A' + 'a';
}

int main() 
{
    char str[] = "HELLO WORLD";
    
    ft_striteri(str, modifychar);
    printf("%s\n", str);

    return 0;
}