/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:59:34 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/13 14:57:09 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_itoa does something conceptually similar to ft_putnbr (turns numbers into characters),
but instead of printing, it creates and returns a string with memory allocation.
*/

#include <stdlib.h>

static unsigned int	numlength(int nb)
{
	unsigned int	len;

	len = 0;
	if (nb <= 0)
        len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	length;
    long			num;
	char			*result;

	num = n;
	length = numlength(num);
	result = (char *)malloc(sizeof(char) * (length + 1));
	if (result == NULL)
		return (NULL);
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
	}
	if (num == 0)
		result[0] = '0';
	result[length] = '\0';
	while (num != 0)
	{
		result[length - 1] = (num % 10) + '0';
		num = num / 10;
		length--;
	}
	return (result);
}

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char *result;

    result = ft_itoa(0);
    printf("nr: %d, result: %s\n", 0, result);
    free(result);

    result = ft_itoa(-2147483647);
    printf("nr: %d, result: %s\n", -2147483647, result);
    free(result);

    result = ft_itoa(467856);
    printf("nr: %d, result: %s\n", 467856, result);
    free(result);

    result = ft_itoa(-42);
    printf("nr: %d, result: %s\n", -42, result);
    free(result);

    return (0);
}