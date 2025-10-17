/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:49:25 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/17 16:19:17 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (newnode == NULL)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}

int	main(void)
{
	char *str = ft_strdup("teste");

	if (!str)
		return (1);
	t_list *node = ft_lstnew(str);
	if (!node)
	{
		free(str);
		return (1);
	}
	printf("content: %s\n", (char *)node->content);

	free(node->content);
	free(node);
	return (0);
}