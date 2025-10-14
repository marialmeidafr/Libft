/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:19:37 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/13 11:19:37 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_trimlen(char const *s1, char set)
{
	int	start;
	int	end;

	start = 0;
	while (s1[start] == set)
		start++;
	end = 0;
	while (s1[end] != '\0')
		end++;
	end--;
	while (end >= start && s1[end] == set)
		end--;
	if (start > end)
		return (0);
	return (end - start + 1);
}

char	*ft_strtrim(char const *s1, char set)
{
	int		start;
	int		len;
	int		i;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	start = 0;
	while (s1[start] == set)
		start++;
	len = ft_trimlen(s1, set);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
int	main(void)
{
	char *res;

	res = ft_strtrim("eeefelipe de paula alveseee", 'e');
	printf("'%s'\n", res);
	free(res);
}