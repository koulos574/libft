/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:15:57 by vifontai          #+#    #+#             */
/*   Updated: 2019/11/28 20:22:05 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char			*destination;
	unsigned const char		*source;
	size_t					i;

	i = 0;
	destination = (unsigned char *)dest;
	source = (unsigned const char *)src;
	while (i < n)
	{
		destination[i] = source[i];
		if (source[i] == (unsigned char)c)
			return (destination + i + 1);
		i++;
	}
	return (NULL);
}
