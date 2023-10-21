#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  a;
    char    *dest;
    
    i = 0;
    a = 0;
    dest = (char *)malloc(sizeof(char) * (len + 1));
    if (!dest)
        return (NULL);
    while (s[i] != '\0')
    {
        if (s[i] == start)
        {  
            while (a < len)
            {
                dest[a] = s[i + a];
                a++;
            }
        }
        i++;
    }
    dest[a] = '\0';
    return (dest);
}
/*
int main(void)
{
    char    s[13] = "Hello World!";
    int     start;

    start = 'W';
    printf("%s\n", ft_substr(s, start, 6));
}
*/