/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:34:55 by mohabid           #+#    #+#             */
/*   Updated: 2024/10/23 22:29:42 by mohabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_words(const char *s, char c)
{
	size_t	i;
	int		count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
			count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**tab;
	size_t	start;
	int		j;

	i = 0;
	j = count_words(s, c);
	tab = (char **)malloc((j + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	j = 0;
	while (s[i])
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			start = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			tab[j++] = ft_substr(s, start, i - start + 1);
		}
	}
	tab[j] = NULL;
	return (tab);
}
/*
int main()
{
	const char *s = "hello people im here w33d and code";
	char c = ' ';
	char **tab = ft_split(s,c);
	if(tab)
	{
		int i = 0;
		while (i < count_words(s,c))
		{
			printf("tab[%d] = %s \n", i, tab[i]);
			i++;
		}
	}
	if(!tab)
		printf("Memory allocation failure");
	free(tab);
	return (0);
}*/
