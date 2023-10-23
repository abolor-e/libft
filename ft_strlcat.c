/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolor-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:41:49 by abolor-e          #+#    #+#             */
/*   Updated: 2023/10/23 16:47:24 by abolor-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;

	i = 0;
	d = 0;
	s = 0;
	if (!dst && !src)
		return (-1);
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (dstsize == 0)
		return (s);
	if (dstsize <= d)
		return (dstsize + s);
	while (d < (dstsize - 1) && src[i] != '\0')
	{
		dst[d] = src[i];
		i++;
		d++;
	}
	dst[d] = '\0';
	return (d);
}
/*
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	src[30] = " Hello World!";
	char	dst[40] = "Hello Saturn!";	

	printf("%zu\n", ft_strlcat(dst, src, 25));
	ft_putstr(dst);
}
*/
