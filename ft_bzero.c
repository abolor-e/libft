/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolor-e <abolor-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:01:11 by abolor-e          #+#    #+#             */
/*   Updated: 2023/10/18 15:42:03 by abolor-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	i = 0;
	dest = (unsigned char*)s;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return ;
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

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
	char	str[40] = "Hello World!";
	
	ft_bzero(str, 5);
	printf("%s\n", str);
}
