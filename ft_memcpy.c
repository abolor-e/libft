/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolor-e <abolor-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:15:00 by abolor-e          #+#    #+#             */
/*   Updated: 2023/10/18 12:25:02 by abolor-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	const unsigned char *source;

	dest = (unsigned char*)dst;
	source = (const unsigned char*)src;
	if (!dest || !src)
		return (NULL);
	while (n > 0)
	{
		*dest = *source;
		dest++;
		source++;
		n--;
	}
	return (dst);
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char	src[50] = "Hello World!";
	char	dest[50];

	ft_strcpy(dest, "Hello Saturn!");
	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, ft_strlen(src));
	printf("After memcpy dest = %s\n", dest);
	
	return (0);
}
