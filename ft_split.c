/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:17:45 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/01/20 16:05:40 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c);
static int	ft_fillword(char **arr, char const *s, char c);
static int	ft_malloc(char **arr, int n, size_t buffer);

static int	count_words(char const *s, char c)
{
	int	i;
	int	words;
	int	is_word;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		is_word = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			if (!is_word)
			{
				words++;
				is_word = 1;
			}
			i++;
		}
	}
	return (words);
}

static int	ft_fillword(char **arr, char const *s, char c)
{
	size_t	len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		len = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			++len;
			++i;
		}
		if (len)
		{
			if (ft_malloc(arr, j, len + 1))
				return (1);
			ft_strlcpy(arr[j], &s[i - len], len + 1);
		}
		j++;
	}
	return (0);
}

static int	ft_malloc(char **arr, int n, size_t buffer)
{
	int	i;

	i = 0;
	arr[n] = malloc(buffer);
	if (arr[n] == NULL)
	{
		while (i < n)
			free(arr[i++]);
		free(arr);
		return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**arr;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	arr = malloc((words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	arr[words] = NULL;
	if (ft_fillword(arr, s, c))
		return (NULL);
	return (arr);
}
