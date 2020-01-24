/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:16:03 by vifontai          #+#    #+#             */
/*   Updated: 2019/11/28 20:45:30 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*destination;
	unsigned const char		*source;

	if (dest == src)
		return (dest);
	i = 0;
	destination = (unsigned char *)dest;
	source = (unsigned const char *)src;
	if (n == 0)
		return (destination);
	if (destination <= source)
	{
		while (i < n)
		{
			destination[i] = source[i];
			i++;
		}
	}
	else
		while (n-- > 0)
			destination[n] = source[n];
	return (destination);
}
