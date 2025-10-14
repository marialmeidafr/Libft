/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:12:47 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/14 11:26:21 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
    int i;
    
    i = 0;
    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;   
    }
    write(fd, "\n", 1);
}
int	main(void)
{
	ft_putendl_fd("teste", 1);
}