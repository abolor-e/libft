/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolor-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:59:50 by abolor-e          #+#    #+#             */
/*   Updated: 2023/10/22 12:59:52 by abolor-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int a;
    char    *ns;

    i = 0;
    while (s1[i] != '\0')
    {
        i++;
    }
    a = 0;
    while (s2[a] != '\0')
    {
        a++;
    }
    ns = (char *)malloc(sizeof(char) * (i + a + 1));
    if (!ns)
        return (NULL);
    a = 0;
    while (s1[a] != '\0')
    {
        ns[a] = s1[a];
        a++;
    }
    i = 0;
    while (s2[i] != '\0')
    {
        ns[a + i] = s2[i];
        i++;
    }
    ns[a + i] = '\0';
    return (ns);
}
/*
int main(void)
{
    char    s1[20] = "Hello World!";
    char    s2[20] = "Hello Saturn!";

    printf("%s\n", ft_strjoin(s1, s2));
}
*/
