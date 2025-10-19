/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:26:07 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/18 22:37:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The  memchr function  scans the initial n bytes of the memory area
pointed to by s for the first instance of c.  Both c and the bytes of
the memory area pointed to by s are interpreted as unsigned char.
The memchr functions return a pointer to the matching
byte or NULL if the character does not  occur  in  the  given  memory
area.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	i;
	unsigned char	*str;
	unsigned char	k;

	i = 0;
	str = (unsigned char *)s;
	k = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == k)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
    const char str[] = "test";
    char ch = 'i';
    size_t len = 14;

    char *result = (char *)ft_memchr(str, ch, len);

    if (result != NULL)
        printf("char '%c' found\n", ch);
    else
        printf("char '%c' not found\n", ch);

    return (0);
}
*/