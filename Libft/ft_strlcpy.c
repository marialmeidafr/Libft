/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:58:03 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/10 09:50:33 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strlcpy() copy  strings 
    strlcpy()  take the full size of the buffer (not just the length) and guarantee
    to NUL-terminate the result (as long as size is larger
    than 0. 
    Note that a byte for the NUL should be included in size.
    for strlcpy() src must be NUL-terminated
    The strlcpy() function copies up to size - 1 characters from the NUL-termi‐
    nated string src to dst, NUL-terminating the result.
    strlcpy() that means the length of src
*/

#include <stdlib.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    unsigned int i;
    int length;

    i = 0;
    length = 0;
    while(src[length])
    {
        length++;
    }
    if(size == 0)
        return (length);
    while(src[i] != '\0' && i < (size - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (length);
}
#include <stdio.h>
 
int main() {
    char src[] = "testing my print";
    char dest[6];
    //small buffer testng

    unsigned int result; //no neg values
    result = ft_strlcpy(dest, src, sizeof(dest));

    printf("copied= %s\n", dest);
    printf("total original length= %u\n", result);

    return 0;
}