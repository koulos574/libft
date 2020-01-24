/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 21:30:42 by vifontai          #+#    #+#             */
/*   Updated: 2019/11/29 20:24:33 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*str;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!(s))
		return (NULL);
	while (s[j])
		j++;
	if (j < start)
		return (ft_strdup(""));
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (len > 0 && s[start])
	{
		str[i++] = s[start++];
		len--;
	}
	str[i] = '\0';
	return (str);
}
