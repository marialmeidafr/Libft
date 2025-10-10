/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 09:32:42 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/09 10:15:32 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
These functions convert lowercase letters to uppercase, and vice versa.

If c is a lowercase letter, toupper() returns its uppercase equivalent,
if an uppercase representation exists in the  current  locale.   Other‐
wise,  it  returns c.
*/
#include <stdio.h>
#include <stdlib.h>

int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
        c -= 32;
    return (c);
}
/*
int main(void)
{
    char str[] = "teste";
	int i = 0;
	while (str[i])
	{
	printf("%c", ft_toupper(str[i]));
	    i++;
	}
	printf("\n");
	return 0;
}
*/