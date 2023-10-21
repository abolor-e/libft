#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483647)
    {
        ft_putchar_fd('-', fd);
        ft_putchar_fd('2', fd);
        n = 147483647;
    }
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n *= -1;
    }
    if (n >= 10)
    {
        ft_putnbr_fd((n / 10), fd);
        ft_putnbr_fd((n % 10), fd);
    }
    else
        ft_putchar_fd((n + 48), fd);
}
/*
int main(void)
{
    ft_putnbr_fd(-2147483647, 1);
}
*/