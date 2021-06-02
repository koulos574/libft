/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <vifontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:34:04 by vifontai          #+#    #+#             */
/*   Updated: 2021/06/02 16:07:21 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_exception(char *str)
{
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

static char	*ft_reverse(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = 0;
	while (str[j])
		j++;
	j--;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	neg;

	i = 0;
	neg = n;
	if (neg < 0)
		neg = neg * -1;
	str = (char *)malloc(ft_intlen(n) * sizeof(char) + 1);
	if (!str)
		return (0);
	if (neg == 0)
		return (ft_exception(str));
	while (neg > 0)
	{
		str[i++] = neg % 10 + '0';
		neg /= 10;
	}
	if (n < 0)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_reverse(str));
}
