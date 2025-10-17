/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:15:43 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/10 10:14:46 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*If c is an uppercase letter, tolower() returns  its  lowercase  equiva‐
lent, if a lowercase representation exists in the current locale.  Oth‐
erwise, it returns c.*/

#include <stdlib.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[];
	int		i;

    str[] = "TESTE";
	i = 0;
	while (str[i])
	{
	printf("%c", ft_tolower(str[i]));
		 i++;
	}
	printf("\n");
	return (0);
}
*/