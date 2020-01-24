/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:20:00 by vifontai          #+#    #+#             */
/*   Updated: 2019/11/28 21:33:39 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int		z;

	z = n;
	if (z < 0)
	{
		ft_putchar_fd('-', fd);
		z *= -1;
	}
	if (z > 9)
	{
		ft_putnbr_fd((z / 10), fd);
		ft_putnbr_fd((z % 10), fd);
	}
	else
		ft_putchar_fd(z + '0', fd);
}
