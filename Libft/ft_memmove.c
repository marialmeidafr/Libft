/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:30:25 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/18 22:47:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* void *memmove(void *dest, const void *src, size_t n);
The  memmove()  function  copies n bytes from memory area src to memory
area dest.  The memory areas may overlap: copying takes place as though
the  bytes in src are first copied into a temporary array that does not
overlap src or dest, and the bytes are then copied from  the  temporary
array to dest.
The memmove() function returns a pointer to dest.
*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*sdest;
	unsigned char	*ssrc;
	size_t			i;

	i = 0;
	sdest = (unsigned char *) dest;
	ssrc = (unsigned char *) src;
	if (sdest > ssrc)
	{
		while (i++ < n)
			sdest[n - i] = ssrc[n - i];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
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
*/