/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolor-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:59:26 by abolor-e          #+#    #+#             */
/*   Updated: 2023/10/22 12:59:31 by abolor-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**SYNOPSIS: #include <string.h>
**DESCRIPTION: The strdup() allocates sufficient memory for a copy of the string s1
**, does the copy, and returns a pointer to it. The pointer may subsequently be used
**as an argument to the function free.
*/
#include "libft.h"

char    *ft_strdup(const char *s1)
{
    int len;
    int i;
    char    *res;

    len = 0;
    i = 0;
    while (s1[len] != '\0')
    {
        len++;
    }
    res = (char *)malloc(sizeof(char) * (i + 1));
    if (!res)
        return (NULL);
    while (s1[i] != '\0')
    {
        res[i] = s1[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}
/*
int main(void)
{
    char    s[50] = "Hello World!";
    char    *res;

    res = ft_strdup(s);
    printf("%s\n", res);
}
*/
