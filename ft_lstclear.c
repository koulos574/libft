/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <vifontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:37:06 by vifontai          #+#    #+#             */
/*   Updated: 2021/06/02 16:35:22 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*first;
	t_list	*last;

	first = *lst;
	while (first)
	{
		last = first->next;
		(*del)(first->content);
		free(first);
		first = last;
	}
	*lst = NULL;
}
