/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolor-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:00:35 by abolor-e          #+#    #+#             */
/*   Updated: 2023/10/22 15:18:31 by abolor-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		a;
	int		len;
	char	*res;
	int		start;

	i = 0;
	a = (ft_strlen(s1)) - 1;
	start = 0;
	while (ft_strchr(set, s1[i]) && i <= a)
		i++;
	while (ft_strchr(set, s1[a]) && a >= 0)
		a--;
	len = a - i + 2;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	while (i <= a)
		res[start++] = s1[i++];
	res[start] = '\0';
	return (res);
}
/*
int main(void)
{
    char    s1[50] = "Hello, World!";
    char    set[10] = "./";

    printf("%s\n", ft_strtrim(s1, set));
}
*/
