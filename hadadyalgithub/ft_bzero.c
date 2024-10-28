/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:27:16 by mohabid           #+#    #+#             */
/*   Updated: 2024/10/22 12:08:38 by mohabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

/* The signedness of characters (whether they are char or unsigned 
 * char) does notaffect how the null terminator operates. 
 * A null terminator simply indicates where the string ends, 
 * and any subsequent characters are not considered part of that string.
int main() {
    char str[50] = "Hello, World!";

    printf("Original string: \"%s\"\n", str);

    // Using ft_bzero to set the first 5 characters to '\0'
    ft_bzero(str+5, 5);

    // Print the modified string
    printf("Modified string: \"%s\"\n", str); 
    return 0;
}*/
