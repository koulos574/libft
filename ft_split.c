/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <vifontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:33:02 by vifontai          #+#    #+#             */
/*   Updated: 2021/06/02 16:30:25 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

static int	w(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (*s == '\0')
		return (0);
	if (s[i] != c && s[i])
		count++;
	i++;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c && s[i])
			count++;
		i++;
	}
	return (count);
}

static int	l(char const *s, char c, int j)
{
	int	i;

	i = 0;
	while (s[j] != c && s[j])
	{
		j++;
		i++;
	}
	return (i);
}

static char	**fre(char **tab, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)tab[j]);
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	j = 0;
	tab = (char **)malloc(sizeof(char *) * (w(s, c) + 1));
	while (s[i] && j < w(s, c))
	{
		k = 0;
		while (s[i] == c)
			i++;
		tab[j] = (char *)malloc(sizeof(char) * l(s, c, i) + 1);
		if (!tab)
			return (fre(tab, j));
		while (s[i] != c && s[i])
			tab[j][k++] = s[i++];
		tab[j][k] = '\0';
		j++;
	}
	tab[w(s, c)] = NULL;
	return (tab);
}
