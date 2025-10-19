/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:19:46 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/13 11:19:46 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	int		count;
	char	*str;

	i = 0;
	k = 0;
	count = 0;
	while (s1[i++])
		count++;
	i = 0;
	while (s2[i++])
		count++;
	str = malloc(count + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
		str[k++] = s1[i++];
	i = 0;
	while (s2[i])
		str[k++] = s2[i++];
	str[k] = '\0';
	return (str);
}
/*
int	main(void)
{
    char	*str1 = "para ";
    char	*str2 = "testar";
    char	*result = ft_strjoin(str1, str2);
    printf("joined: %s\n", result);    
    free(result);
    return 0;
}*/