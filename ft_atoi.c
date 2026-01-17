/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:26:08 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/01/17 17:47:06 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_isdigit(int c);
int	ft_isspace(int c);

int	ft_atoi(const char *nptr)
{
	int	nbr;
	int	sign;

	nbr = 0;
	sign = 1;
	while (ft_isspace(*nptr) == 1)
		nptr++;
	if (*nptr == '-')
	{
		sign *= -1;
		nptr++;
	}
	while (ft_isdigit(*nptr) == 1)
	{
		nbr *= 10;
		nbr += *nptr - 48;
		nptr++;
	}
	if (sign < 0)
		return (-nbr);
	return (nbr);
}

int	ft_isspace(int c)
{
	if (c == 32 || (c >= 8 && c <= 13))
		return (1);
	return (0);
}
