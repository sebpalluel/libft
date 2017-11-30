/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelif.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 12:03:37 by psebasti          #+#    #+#             */
/*   Updated: 2017/11/30 15:13:00 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstdelif2(t_list **list, \
		int (*cmp)(void *, size_t), void (*del)(void *, size_t))
{
	t_list	*list_swap;

	list_swap = NULL;
	while (*list->next && (*cmp)(*list->content, *list->content_size) == OK)
		*list = *list->next;
	if (*list->next->next)
	{
		*list_swap = *list->next->next;
		ft_lstdelone(*list->next, del);
		*list->next = *list_swap;
	}
	else
	{
		ft_lstdelone(*list->next, del);
		*list->next = NULL;
	}
}

void		ft_lstdelif(t_list **alst, int (*cmp)(void *, size_t), \
		void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*list_swap;

	list = *alst;
	if (*alst && cmp && del)
	{
		if ((*cmp)(list->content, list->content_size) == OK)
		{
			list_swap = list->next;
			ft_lstdelone(list, del);
			*alst = list_swap;
		}
		while (list && list->next)
			ft_lstdelif2(&list, cmp, del);
	}
}
