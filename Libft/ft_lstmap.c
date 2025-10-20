/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:20:37 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/20 16:01:18 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_makelist(t_list *list, void *(*f)(void *),
void (*del)(void *))
{
	t_list	*n_list;
	void	*content;

	if (list == NULL || f == NULL || del == NULL)
		return (NULL);
	content = f(list->content);
	n_list = ft_lstnew(content);
	if (n_list == NULL)
	{
		del(content);
		return (NULL);
	}
	return (n_list);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*list_start;
	void	*content;

	list_start = ft_mklst(lst, f, del);
	if (!list_start)
		return (NULL);
	n_list = list_start;
	lst = lst->next;
	while (lst)
	{
		content = f(lst->content);
		n_list->next = ft_lstnew(content);
		if (!n_list->next)
		{
			del(content);
			ft_lstclear(&list_start, del);
			return (NULL);
		}
		n_list = n_list->next;
		lst = lst->next;
	}
	return (list_start);
}
