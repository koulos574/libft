/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:15:51 by vifontai          #+#    #+#             */
/*   Updated: 2019/11/28 20:44:07 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*destination;
	unsigned const char	*source;
	size_t				i;

	if (dest == src)
		return (dest);
	i = 0;
	destination = (unsigned char *)dest;
	source = (unsigned const char *)src;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}
