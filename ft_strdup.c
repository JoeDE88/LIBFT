/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 18:11:37 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/01/17 19:39:08 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char			*ptr;
	int				len;

	len = 0;
	while (s[len] != '\0')
		++len;
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s, len + 1);
	return (ptr);
}

int	main(void)
{
	printf("%s\n", ft_strdup("Copying."));
}