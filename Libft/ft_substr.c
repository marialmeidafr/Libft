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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_calloc(sizeof(char), len + 1);
	if (str == NULL)
		return (NULL);
	while (len >= 0 && s[start] != '\0')
	{
		str[i] = s[start];
		start++;
		i++;
		len--;
	}
	return (str);
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
