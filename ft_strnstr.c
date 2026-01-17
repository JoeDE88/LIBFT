/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:03:59 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/01/15 18:54:19 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (i < len)
	{
		while (big[i + j] == little[j] && little[j] != '\0')
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		else
			j = 0;
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("native: %s\n", strnstr("Simple string", "ee", 25));
	printf(" libft: %s\n", ft_strnstr("Simple string", "ee", 25));
}
