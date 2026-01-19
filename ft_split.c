/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:17:45 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/01/19 17:54:29 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(char const *s, char c);
static void	ft_word(char **arr, int i, char *s, int n);

static int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (words);
}

static void	ft_word(char **arr, int i, char *s, int n)
{
	char	*ptr;

	ptr = malloc((n + 1) * sizeof(char));
	ft_strlcpy(arr[i], s, n);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		w;
	int		words;
	size_t	len;
	i = 0;
	w = 0;
	words = count_words(s, c);
	len = ft_strlen(s);
	arr = malloc((len + 1 + words) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i + j] != c)
			j++;
		ft_word(arr, w, (char *)&s[i], j);
		w++;
		free(arr[i]);
		i++;
	}
	printf("words: %d\n", words);
	return (arr);	
}

int	main(void)
{
	char	str[] = "This is a small test";
	char	c = ' ';
	char	*arr[] = {""};
	int	i = 0;

	**arr = **ft_split(str, c);
	while (i < 5)
	{
		printf("%s\n", arr[i]);
		i++;
	}
}
