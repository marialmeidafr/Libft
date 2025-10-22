/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:45:57 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/20 14:13:54 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	(*del)(lst -> content);
	free (lst);
}
/*
int	main(void)
{
	t_list *a = malloc(sizeof(t_list));
	t_list *b = malloc(sizeof(t_list));

	if (!a || !b)
		return (1);

	a->content = strdup("primeiro");
	b->content = strdup("segundo");

	a->next = b;
	b->next = NULL;

	ft_lstdelone(a, free);
	
	printf("%s\n", (char *)b->content);

	free(b->content);
	free(b);
	return (0);
}
*/