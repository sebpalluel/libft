/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelif.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 12:03:37 by psebasti          #+#    #+#             */
/*   Updated: 2017/11/30 15:33:43 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstdelif2(t_list **list, void *to_cmpr, \
		int (*cmp)(void *, void *), void (*del)(void *, size_t))
{
	t_list	*lst_swap;
	t_list	*lst;

	lst_swap = NULL;
	lst = *list;
	while (lst->next && (*cmp)(lst->content, to_cmpr) == OK)
		lst = lst->next;
	if (lst->next->next)
	{
		lst_swap = lst->next->next;
		ft_lstdelone(&lst->next, del);
		lst->next = lst_swap;
	}
	else
	{
		ft_lstdelone(&lst->next, del);
		lst->next = NULL;
	}
}

void		ft_lstdelif(t_list **alst, void *to_cmpr, \
		int (*cmp)(void *, void *), void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*lst_swap;

	list = *alst;
	if (*alst && cmp && del)
	{
		if ((*cmp)(list->content, to_cmpr) == OK)
		{
			lst_swap = list->next;
			ft_lstdelone(&list, del);
			*alst = lst_swap;
		}
		while (list && list->next)
			ft_lstdelif2(&list, to_cmpr, cmp, del);
	}
}
