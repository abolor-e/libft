/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolor-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:58:53 by abolor-e          #+#    #+#             */
/*   Updated: 2023/10/23 13:01:55 by abolor-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_free_split(char **split_array)
{
	size_t	i;

	i = 0;
	if (split_array == NULL)
		return ;
	while (split_array[i] != NULL)
	{
		free(split_array[i]);
		++i;
	}
	free(split_array);
}
*/
static size_t	ft_slen(const char *s, char c)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			++ret;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	ret = malloc(sizeof(char *) * (ft_slen(s, c) + 1));
	if (!ret)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			char *temp = ft_substr(s - len, 0, len);
			if (!temp)
			{
				while (i > 0)
					free(ret[--i]);
				free(ret);
				return (0);
			}
			ret[i++] = temp;
		}
		else
			++s;
	}
	ret[i] = 0;
	return (ret);
}
/*
int	main(void)
{
	const char *input = "  This is a test string for Splitting";
	char	**result = ft_split(input, ' ');
	int	i;

	i = 0;
	while (result[i])
	{
		printf("%s", result[i]);
		i++;
	}
}
*/
