/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:27:13 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/10 14:56:41 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memcmp() function compares the first n bytes (each interpreted as
unsigned char) of the memory areas s1 and s2.
The memcmp() function returns an integer  less  than,  equal  to,  or
greater  than zero if the first n bytes of s1 is found, respectively,
to be less than, to match, or be greater than the first  n  bytes  of s2.

For a nonzero return value, the sign is determined by the sign of the
difference between the first pair of bytes (interpreted  as  unsigned
char) that differ in s1 and s2.

If n is zero, the return value is zero.*/

#include <stdlib.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *str1;
    unsigned char *str2;

    i = 0;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    
    while(i < n)
    {
        if(str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}
#include <stdio.h>
int	main()
{
	const void *s = "ac";
	const void *d = "abc";
	printf("%d\n", ft_memcmp(s, d, 2));
}