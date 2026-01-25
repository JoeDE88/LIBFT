/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:37:45 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/01/14 15:35:39 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp_dest;
	const unsigned char	*tmp_src;

	if (!dest || !src)
		return (NULL);
	tmp_dest = (unsigned char *)dest;
	tmp_src = (const unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	if (tmp_dest > tmp_src)
	{
		while (n-- > 0)
			tmp_dest[n] = tmp_src[n];
	}
	else
		ft_memcpy(tmp_dest, tmp_src, n);
	return (dest);
}
