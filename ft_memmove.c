/*
**SYNOPSIS: #include <string.h>
**DESCRIPTION: The function copies len bytes from string src to string dst.
**The two strings may overlap; the copy is always done in a non-destructive manner.
**The memmove function returns the original value of dst.
*/

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char       *dest;
    const unsigned char *source;
    size_t              i;

    dest = (unsigned char *)dst;
    source = (const unsigned char *)src;
    i = 0;
    if (dest > source)
    {
        while (len > 0)
        {
            dest[len - 1] = source[len - 1];
            len--;
        }
    }
    else
    {
        while (i < len)
        {
            dest[i] = source[i];
            i++;
        }
    }
    return (dst);
}
/*
int main(void)
{
    char    src[30] = "Hello, World!";
    char    *res;

    ft_memmove(src + 2, src, 13);
    printf("%s\n", src);
}
*/