/*
**SYNOPSIS: #include <string.h>
**The memcp function compares byte string s1 against
**byte string s2. Both strings are assumed to be n bytes long.
**RETURN VALUE: The memcmp function returns zero if the two 
**strings are identical, otherwise returns the first 2 differing
**bytes.
*/

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;

    i = 1;
    while (i < n && *(unsigned char *)s1 == *(unsigned char *)s2)
    {
        s1++;
        s2++;
        i++;   
    }
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*
int main(void)
{
    char    s1[50] = "abcde";
    char    s2[50] = "abcDe";
    int     res;

    res = ft_memcmp(s1, s2, 4);
    printf("%d\n", res);
}
*/