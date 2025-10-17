/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:55:08 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/10 16:16:09 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strrchr() function returns a pointer to the  last  occurrence  of
the character c in the string s.
The	strrchr(void) function return a pointer to the  matched character  or  NULL  if  the character is not found.  The terminating
null byte is considered part of the string, so that if c is specified as '\0',
	these functions return a pointer to the terminator.
*/

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int	ch;
	int	i;

	i = 0;
	ch = (char)c;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
#include <stdio.h>

int	main(void)
{
	const char *str = "testing";
	char ch = 'c';
	char *result;

	result = ft_strrchr(str, ch);
	if (result)
		printf("last occurrence of '%c' found", ch);
	else
		printf("char '%c' not found\n", ch);

	return (0);
}