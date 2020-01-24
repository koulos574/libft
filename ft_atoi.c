/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:18:10 by vifontai          #+#    #+#             */
/*   Updated: 2019/11/28 20:20:33 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	size_t		x;
	long		y;
	long		z;

	z = 0;
	x = 0;
	y = 1;
	while (nptr[x] == ' ' || nptr[x] == '\f' || nptr[x] == '\n' ||
			nptr[x] == '\r' || nptr[x] == '\t' || nptr[x] == '\v')
		x++;
	if (nptr[x] == '-')
		y = -1;
	if (nptr[x] == '-' || nptr[x] == '+')
		x++;
	while (nptr[x] >= '0' && nptr[x] <= '9')
	{
		z = z * 10 + nptr[x] - '0';
		if (z > 2147483648 && y == -1)
			return (0);
		if (z > 2147483648)
			return (-1);
		x++;
	}
	return (z * y);
}
