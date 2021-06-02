/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <vifontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 13:24:26 by vifontai          #+#    #+#             */
/*   Updated: 2021/06/02 16:07:35 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	int		i;
	int		j;

	if (!(s) || !(set))
		return (0);
	i = 0;
	while (s[i] && ft_strchr(set, s[i]) != NULL)
		i++;
	j = ft_strlen(&s[i]);
	if (j != 0)
		while (s[i + j - 1] && ft_strchr(set, s[i + j - 1]) != NULL)
			j--;
	return (ft_substr(s, i, j));
}
