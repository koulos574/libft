/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:37:34 by vifontai          #+#    #+#             */
/*   Updated: 2019/11/28 20:37:58 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *bro;
	t_list *size;

	if (lst == 0)
		return (0);
	size = lst;
	if (!(bro = malloc(ft_lstsize(size) * sizeof(size))))
		return (NULL);
	bro = (*f)(lst);
	while (size)
	{
		if (bro->content)
			(*del)(bro->content);
		(*f)(bro->content);
		size = size->next;
		bro = bro->next;
	}
	return (bro);
}
