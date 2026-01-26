/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:42:46 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/01/19 15:16:17 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_isinset(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (s1[i] != '\0' && ft_isinset(s1[i], set))
		i++;
	while (len > i && ft_isinset(s1[len - 1], set))
		len--;
	str = malloc((len - i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s1 + i, len - i);
	str[len-i] = 0;
	return (str);
}

static int	ft_isinset(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}
