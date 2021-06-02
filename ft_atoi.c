/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <vifontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:18:10 by vifontai          #+#    #+#             */
/*   Updated: 2021/06/02 17:03:25 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char x)
{
	if (x == ' ' || x == '\f' || x == '\n')
		return (1);
	else if (x == '\r' || x == '\t' || x == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	size_t		x;
	long		y;
	long		z;

	z = 0;
	x = 0;
	y = 1;
	while (is_space(nptr[x]))
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
