/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:16:56 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/18 22:41:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*SYNOPSIS
       #include <string.h>

       void *memcpy(void *dest, const void *src, size_t n);

DESCRIPTION
       The  memcpy()  function  copies  n bytes from memory area src to memory
       area dest.  The memory areas must not overlap.  Use memmove(3)  if  the
       memory areas do overlap.

RETURN VALUE
       The memcpy() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*dst;
	char			*source;

	i = 0;
	dst = (char *)dest;
	source = (char *)src;
	if (dest == src)
		return (dest);
	while (i < n)
	{
		dst[i] = source[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    const char src[] = "its my memcpy";

    char *dst = malloc(strlen(src) + 1);
    if (dst == NULL)
    {
        printf("error");
        return 1;
    }

    ft_memcpy(dst, src, strlen(src) + 1);

    printf("source:  %s\n", src);
    printf("dest:    %s\n", dst);


    free(dst);

    return 0;
}*/