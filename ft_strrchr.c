/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:26:20 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/01/15 12:48:58 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t 		len;

	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (len > 0)
	{
		if (s[len] == c)
			return ((char *)&s[len]);
		len--;
	}
	if (s[len] == c)
		return ((char *)&s[len]);
	return (NULL);
}
