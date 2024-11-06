/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:57:55 by mohabid           #+#    #+#             */
/*   Updated: 2024/10/31 20:05:54 by mohabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	if (size * nmemb > SIZE_MAX)
		return (NULL);
	ptr = (unsigned char *)malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	ptr[0] = 0;
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)(ptr));
}
/*int main() {
	// size_t n = 1;
	int *arr;
	// arr = (int *)calloc(0,0);
	// if(!arr)
	// {
	// 	printf("Memory allocation fails");
	// 	return 1;
	// }
	// free(arr);
	arr = (int *)ft_calloc(0, 0);
	if (arr == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}
	free(arr);
	return 0;
}*/