/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:07:46 by mohabid           #+#    #+#             */
/*   Updated: 2024/10/23 21:29:04 by mohabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(const char *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	char	*result;
	size_t	end;
	size_t	i;

	start = 0;
	while (s1[start] && is_set(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > 0 && is_set(set, s1[end - 1]))
		end--;
	if (start >= end)
	{
		result = (char *)malloc(1);
		if (!result)
			return (NULL);
		return (ft_strdup(""));
	}
	result = (char *)malloc((end - start) * sizeof(char) + 1);
	if (!result)
		return (NULL);
	i = 0;
	ft_strlcpy(result, s1 + start, end - start + 1);
	return (result);
}
/*
int	main(void)
{
	char	*str;
	char	*set;
	char	*result;

	str = "abbabbababamy name is simo bababbabab";
	set = "ab";
	result = ft_strtrim(str, set);
	printf("%s", result);
	free(result);
	return (0);
}*/
