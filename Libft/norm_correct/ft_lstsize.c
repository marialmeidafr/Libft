/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:32:21 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/17 16:19:18 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	if (lst == NULL)
		return (0);
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
int	main(void)
{
	t_list *a = malloc(sizeof(t_list));
	t_list *b = malloc(sizeof(t_list));
	t_list *c = malloc(sizeof(t_list));

	if (!a || !b || !c)
		return (1);

	a->next = b;
	a->next->next = c;
	a->next->next->next = NULL;

	printf("%d\n", ft_lstsize(c));
	free(a);
	free(b);
	free(c);
	return (0);
}