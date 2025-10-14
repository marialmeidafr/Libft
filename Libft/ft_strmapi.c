/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:59:44 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/14 09:57:07 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_strmapi does is apply 
the function f to every character of the string s.
*/

#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    unsigned int size;
    char *str;

    i = 0;
    size = 0;
    while(s[size])
        size++;
    str = (char *)malloc(sizeof(char) * (size + 1));
    if(str == NULL)
        return (NULL);
    while(i < size)
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}

static char nextcharacter(unsigned int index, char	c)
{
    (void)index;
    return (c + 1);
 }

#include <stdio.h>

int	main (void)
{
	char const	*str = "teste";

	printf("%s", ft_strmapi(str, nextcharacter));
	
return (0);
}
