/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:39:11 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/22 09:11:51 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int main(void)
{
	t_list *a = ft_lstnew("um");
	t_list *b = ft_lstnew("dois");
	t_list *c = ft_lstnew("três");
	a->next = b;
	b->next = c;

	ft_lstiter(a, &print_content);
}
*/