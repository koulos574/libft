/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <vifontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:37:34 by vifontai          #+#    #+#             */
/*   Updated: 2021/06/02 16:31:46 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*bro;
	t_list	*size;

	if (lst == 0)
		return (0);
	size = lst;
	bro = malloc(ft_lstsize(size) * sizeof(size));
	if (!bro)
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
