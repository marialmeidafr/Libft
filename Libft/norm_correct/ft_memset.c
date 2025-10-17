/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:30:23 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/08 16:56:12 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	char			*string;

	i = 0;
	string = (char *)s;
	while (i < n)
	{
		string[i] = (char)c;
		i++;
	}
	return (s);
}

#include <stdio.h>

int	main(void)
{
	char str[20];

	ft_memset(str, 'A', 19);
	str[19] = '\0';

	printf("result of ft_memset: %s\n", str);

	ft_memset(str, 'c', 5);
	printf("result after ft_memset: %s\n", str);

	return (0);
}