/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <vifontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:33:14 by vifontai          #+#    #+#             */
/*   Updated: 2021/06/02 16:15:37 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlena(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned char	i;
	char			*res;

	if (!s || !f)
		return (NULL);
	res = (char *)malloc(ft_strlena((char *)s) * sizeof(char) + 1);
	if (!res)
		return (0);
	i = 0;
	while (s[i])
	{
		res[i] = (*f)(i, (char)s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
