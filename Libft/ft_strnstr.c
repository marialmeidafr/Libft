/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:46:08 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/10 10:09:56 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strnstr() function locates the first occurrence of the null-termi‐
nated string little in the string big, where not more than len characters
are searched.  Characters that appear after a ‘\0’ character are not
searched.  Since the strnstr() function is a FreeBSD specific API, it
should only be used when portability is not a concern.
If little is an empty string, big is returned; if little occurs nowhere
in big, NULL is returned; otherwise a pointer to the first character of
the first occurrence of little is returned.

If little is an empty string, big is returned; if little occurs nowhere
in big, NULL is returned; otherwise a pointer to the first character of
the first occurrence of little is returned.
*/

#include <stdlib.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    int i;

    i = 0;
    if(*little == '\0')
        return (big);
    while(big[i])
        i++;
}