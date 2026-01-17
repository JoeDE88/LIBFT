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

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	while (*s)
	{
		if (*s == c)
			ptr = s;
		s++;
	}
	if (*s == c)
	{
		ptr = s;
		return ((char *)ptr);
	}
	else
		return (0);
}
