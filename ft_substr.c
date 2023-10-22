/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolor-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:00:43 by abolor-e          #+#    #+#             */
/*   Updated: 2023/10/22 15:16:31 by abolor-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	a;
	char	*dest;

	i = 0;
	a = 0;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == (char)start)
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
