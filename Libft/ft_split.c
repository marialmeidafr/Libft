/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:27:42 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/17 17:25:14 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static size_t	ft_first_not_of(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			break ;
		i++;
	}
	return (i);
}

static size_t	ft_countlen(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static size_t	ft_seglen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			break ;
		i++;
	}
	return (i);
}

static char	**ft_free_array(char **array, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	j;
	char	**array;
	size_t	i;

	count = ft_countlen(s, c);
	array = ft_calloc(sizeof(char *), (count + 1));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (j < count)
	{
		i += ft_first_not_of(&s[i], c);
		array[j] = ft_calloc(sizeof(char), ft_seglen(&s[i], c) + 1);
		if (!array[j])
			return (ft_free_array(array, j));
		ft_memcpy(array[j], &s[i], ft_seglen(&s[i], c));
		i += ft_seglen(&s[i], c);
		j++;
	}
	return (array);
}

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
