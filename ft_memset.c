/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolor-e <abolor-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:18:16 by abolor-e          #+#    #+#             */
/*   Updated: 2023/10/18 13:48:34 by abolor-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dest;
	size_t			i;

	i = 0;
	dest = (unsigned char*)b;
	 while (len > 0)
	 {
		 dest[i] = (unsigned char)c;
		 len--;
		 i++;
	 }
	 return (b);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	if (!dest || !src)
		return (NULL);
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
	
	ft_memset(str, '$', 5);
	ft_putstr(str);
	return (0);
}
