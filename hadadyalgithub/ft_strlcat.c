/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:53:58 by mohabid           #+#    #+#             */
/*   Updated: 2024/10/22 17:45:45 by mohabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (src[j])
		j++;
	if (i >= size)
		return (size + j);
	k = 0;
	while (src[k] && i + k < size - 1)
	{
		dst[i + k] = src[k];
		k++;
	}
	return (i + j);
}
/*
int main() {
    char dest[10] = "Hello";
    const char *src = " World!";

    size_t result = ft_strlcat(dest, src, sizeof(dest));

    printf("Resulting String: \"%s\"\n", dest);
    printf("Total Length: %zu\n", result);

    return 0;
}*/
