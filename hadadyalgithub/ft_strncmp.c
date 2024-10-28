/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:18:32 by mohabid           #+#    #+#             */
/*   Updated: 2024/10/22 20:35:27 by mohabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	while (i < n)
		return (s1[i] - s2[i]);
	return (s1[i] - s2[i]);
}
/*
int main()
{
	const char *s1 = "All I want is peace and food.";
	const char *s2 = "All I want is";
	int n = ft_strncmp(s1,s2,20);
	printf("the comparision of the 2 strings at 20 size is %d\n",n);
	return 0;
}*/
