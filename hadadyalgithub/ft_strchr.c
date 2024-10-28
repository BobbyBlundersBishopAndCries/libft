/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:40:50 by mohabid           #+#    #+#             */
/*   Updated: 2024/10/22 20:16:43 by mohabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
/*
int main() {
    const char *str = "Hello, World!";
    char c = '\0';

    char *result = ft_strchr(str, c);

    if (result) {
        printf("Found '%c' at position: %zu\n", c, result - str);
    } else {
        printf("Character '%c' not found.\n", c);
    }

    return 0;
}*/
