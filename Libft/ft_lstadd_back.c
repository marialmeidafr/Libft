/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:10:57 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/17 16:19:12 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *node;
    
    if(new == NULL)
        return ;
    if(*lst == NULL)
    {
        *lst = new;
        return ;
    }
    node = ft_lstlast(*lst);
    node->next = new;
}