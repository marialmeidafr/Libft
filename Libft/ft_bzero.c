/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:01:54 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/18 20:08:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
/*The character '\0' in C literally represents the value zero (0) as a byte.
The ft_bzero function is meant to fill a block of memory with zeros,
	effectively clearing it.*/

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*string;

	i = 0;
	string = (char *)s;
	while (i < n)
	{
		string[i] = '\0';
		i++;
	}
}
/*
#include <stddef.h>
#include <stdio.h>

int	main(void)
{
    char buffer[10] = "Test12345"; 
    printf("Before ft_bzero: %s\n", buffer);
    ft_bzero(buffer, 4);
    printf("After ft_bzero: %s\n", buffer);
    return (0);
}
*/