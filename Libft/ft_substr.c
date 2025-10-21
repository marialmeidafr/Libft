/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:19:33 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/13 11:19:33 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_totlen(size_t str_len, size_t start, size_t len)
{
	size_t	total;

	if (start + len > str_len)
		total = str_len - start;
	else if (str_len < len)
		total = str_len;
	else
		total = len;
	return (total + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;
	char	*sub_str;

	str_len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start > str_len)
	{
		start = 0;
		len = 0;
	}
	sub_str = (char *) malloc(sizeof(char) * (ft_totlen(str_len, start, len)));
	if (sub_str == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
/*
int	main(void)
{
    char	*str = "testar substr";
    char	*result = ft_substr(str, 2, 2);
    printf("substring: %s\n", result);    
    free(result);
    return 0;
}*/
