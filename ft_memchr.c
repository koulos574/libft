/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:16:10 by vifontai          #+#    #+#             */
/*   Updated: 2019/11/28 20:21:46 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	unsigned const char		*destination;

	i = 0;
	destination = (unsigned const char *)s;
	while (i < n)
	{
		if (destination[i] == (unsigned char)c)
			return ((char *)destination + i);
		i++;
	}
	return (NULL);
}
