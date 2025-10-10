/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:01:54 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/08 17:13:39 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
    unsigned int i;
    char *string;
    
    i = 0;
    string = (char *)s;
    while(i < n)
    {
        string[i] = '\0';
        i++;
    }
}
/*
#include <stddef.h>
#include <stdio.h>

int main(void)
{
    char buffer[10] = "Test12345"; 

    printf("Before ft_bzero: %s\n", buffer);

    ft_bzero(buffer, 4);

    printf("After ft_bzero: %s\n", buffer);

    return 0;
}
*/