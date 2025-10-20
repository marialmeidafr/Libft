/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:01:07 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/20 13:55:31 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
static void	nextcharacter(unsigned int index, char	*c)
{
	(void)index;
	*c += 1;
}

#include <stdio.h>

int	main (void)
{
	char str[] = "teste";
    ft_striteri(str, nextcharacter);
	printf("%s", str);
	
    return (0);
}
*/