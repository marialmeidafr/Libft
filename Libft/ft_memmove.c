/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:30:25 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/08 17:56:30 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*SYNOPSIS
       #include <string.h>

       void *memmove(void *dest, const void *src, size_t n);

DESCRIPTION
       The  memmove()  function  copies n bytes from memory area src to memory
       area dest.  The memory areas may overlap: copying takes place as though
       the  bytes in src are first copied into a temporary array that does not
       overlap src or dest, and the bytes are then copied from  the  temporary
       array to dest.

RETURN VALUE
       The memmove() function returns a pointer to dest.
*/
 #include <string.h>

 void *ft_memmove(void *dest, const void *src, size_t n)
 {
    unsigned int i;
    char *dst;
    char *source;
    char temp[n];
    
    i = 0;
    dst = (char *)dest;
    source = (char *)src;
    while(i < n)
    {
        temp[i] = source[i];
        dst[i] = temp[i];
        i++;
    }
    return (dest);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[] = "lets test";
	
	ft_memmove(str, str + 5, 4);
	printf("\nft_memmove with overlap:\n");
	printf("dest = %s\n", str);


	char src[] = "test";
	char dest[5];

	ft_memmove(dest, src, 5);

	printf("\nft_memmove no overlap:\n");
	printf("src  = %s\n", src);
	printf("dest = %s\n", dest);

	return 0;
}