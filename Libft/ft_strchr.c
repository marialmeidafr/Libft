/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:20:23 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/19 11:56:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The  strchr()  function  returns a pointer to the first occurrence of
the character c in the string s.
The strchr()function return a pointer to the  matched
character  or  NULL  if  the character is not found.  The terminating
null byte is considered part of the string, so that if c is specified
as '\0', these functions return a pointer to the terminator.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	j;

	j = (char)c;
	while (*s != '\0' && *s != j)
		s++;
	if (*s == j)
		return ((char *)s);
	else
		return (NULL);
}
/*
#include <stdio.h>
int main(void) 
{
    const char *str = "testing";
    char point = 'e';

    char *result = ft_strchr(str, point);

    if (result != NULL) 
        printf("character '%c' found in the string.\n", point);
    else 
        printf("character '%c' not found in the string.\n", point);
    return 0;
}
*/