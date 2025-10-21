/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:26:07 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/21 12:15:51 by mariaalm         ###   ########.fr       */
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
    char ch = 'e';
    size_t len = ft_strlen(str);

    char *result = (char *)ft_memchr(str, ch, len);

    if (result != NULL)
	{
        printf("char '%c' found\n", ch);
		printf("memmory address: %p\n", result);
	}
    else
        printf("char '%c' not found\n", ch);

    return (0);
}
*/