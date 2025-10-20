/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:27:42 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/20 14:05:53 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **strs, size_t words)
{
	size_t	i;

	i = 0;
	while (i < words)
	{
		free(strs[i]);
		i++;
	}
	free (strs);
	return (NULL);
}

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && j == 0)
		{
			j = 1;
			count++;
		}
		else if (s[i] == c)
			j = 0;
		i++;
	}
	return (count);
}

static size_t	ft_seglen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**fill_array(char **strs, char const *s, char c, size_t words)
{
	size_t	i;
	size_t	j;
	size_t	seg;

	i = 0;
	seg = 0;
	while (seg < words)
	{
		j = 0;
		while (s[i] && s[i] == c)
			i++;
		strs[seg] = malloc(ft_seglen(&s[i], c) + 1);
		if (strs[seg] == NULL)
			return (ft_free(strs, seg));
		while (s[i] && s[i] != c)
		{
			strs[seg][j] = s[i];
			i++;
			j++;
		}
		strs[seg][j] = '\0';
		seg++;
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	strings;

	if (s == NULL)
		return (NULL);
	strings = count_words(s, c);
	result = malloc(sizeof(char *) * (strings + 1));
	if (result == NULL)
		return (NULL);
	result[strings] = NULL;
	if (strings > 0)
		result = fill_array(result, s, c, strings);
	return (result);
}
/*
int	main(int ac, char **av)
{
	if (ac >= 3)
	{
		char	**array = ft_split(av[1], av[2][0]);
		int	i = 0;
		if (array)
		{
			while (array[i])
			{
				printf("%s.\n", array[i]);
				free(array[i]);
				i++;
			}
			free(array);
		}
	}
}
*/