/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:28:57 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/10 09:42:04 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The  strdup() function returns a pointer to a new string which is a du‐
plicate of the string s.  Memory for the new string  is  obtained  with
malloc(3), and can be freed with free(3).
*/
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	int		size;
	char	*dest;

	i = 0;
	size = 0;
	while (s[size])
		size++;
	dest = malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>

int	main(void)
{
	char	*dup;

	dup = ft_strdup("teste");
	printf("Duplicate: %s\n", dup);
	free(dup);
}
