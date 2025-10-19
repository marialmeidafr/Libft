/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:15:43 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/19 13:00:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
#include <stdio.h>
int main(void)
{
    char str[] = "TESTE";
	int i = 0;
	while (str[i])
	{
	printf("%c", ft_tolower(str[i]));
	    i++;
	}
	printf("\n");
	return 0;
}
*/