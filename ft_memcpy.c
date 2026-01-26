/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:49:59 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/01/14 14:10:12 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp_dest;
	const unsigned char	*tmp_src;
	size_t				i;

	if (!src && !dest)
		return (NULL);
	i = 0;
	tmp_dest = (unsigned char *)dest;
	tmp_src = (const unsigned char *)src;
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}
