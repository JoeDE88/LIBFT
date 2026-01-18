/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 19:50:52 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/01/17 19:52:42 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char            *substr;
    size_t          s_len;

    if (!s)
    return (NULL);
    s_len = ft_strlen(s);
    if (start > s_len)
        return (ft_strdup(""));
    if (len > s_len + start)
        len = s_len + start;
    substr = malloc((len + 1)  * sizeof(char));
    if (substr == NULL)
        return (NULL);
    ft_strlcpy(substr, &s[start], len + 1);
    return (substr);
}

int	main(void)
{
    char    *str;

    str = ft_substr("Upgrade your grey matter.", 17, 10);
    printf("%s\n", str);
    free(str);
    return (0);
}