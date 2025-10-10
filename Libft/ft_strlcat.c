/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:17:20 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/08 18:47:07 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*strlcat() concatenate strings respectively. 
    strlcat() take the full size of the buffer (not just the
    length) and guarantee to NUL-terminate the result (as long as size is larger
    than 0 or, 
    in the case of strlcat(), as long as there is at least one byte
    free in dst). 
    Note that a byte for the NUL should be included in size.
    for strlcat() both src and dst must be NUL-terminated.
    The strlcat() function appends the NUL-terminated string src to the end of
    dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating
    the result.
    strlcat() traverses size characters without finding a
    NUL, the length of the string is considered to be size and the destination
    string will not be NUL-terminated (since there was no space for the NUL).
    This keeps strlcat() from running off the end of a string.  In practice this
    should not happen (as it means that either size is incorrect or that dst is
    not a proper “C” string).  The check exists to prevent potential security
    problems in incorrect code.
*/

#include <stdlib.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    unsigned int i;
    unsigned int j;
    unsigned int lenght;

    i = 0;
    j = 0;
    lenght = 0;
    while(dst[i])
        i++;
    while(src[lenght])
        lenght++;
    if (size <= i)
		lenght += size;
	else
		lenght += i;
    while(src[j] != '\0' && (i + 1) < size)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (lenght);
}
#include<stdio.h>
int	main(void)
{
	char dst[20] = "testar";
	char src[20] = "juntarr";
	unsigned int	n = 14;

  int	ret = ft_strlcat(dst, src, n);
	printf("returned len: %u \nstring: %s\n", ret, dst);

	return (0);
}