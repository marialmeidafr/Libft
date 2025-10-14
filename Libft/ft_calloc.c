/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:19:26 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/13 12:51:16 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The calloc() function allocates memory for an array of nmemb elements of 
size bytes each and returns a pointer to the allocated memory. 
The memory is set to zero. If nmemb or size is 0, then calloc() returns either NULL, 
or a unique pointer value that can later be successfully passed to free().
*/

#include <stdlib.h>

//nmemb = number of elements you want in the array.
//size = size of each element, in bytes.
//bytes = total of memory that will be allocated
//(the total size of the array in bytes)
void *ft_calloc(size_t nmemb, size_t size)
{
    size_t i;
    size_t bytes;
    char *str;

    i = 0;
    bytes = nmemb * size;
    str = malloc(bytes);
    if (str == 0)
        return (NULL);
    while(i  < bytes)
    {
        str[i] = 0;
        i++;
    }
    return (str);
}
#include <stdio.h>
#include <string.h>

int main(void) 
{

    char *str = (char *)ft_calloc(2, sizeof(char));
    if (str == NULL) 
	{
        return (1); 
    }
    strcpy(str, "hi");
    printf("%s\n", str);
    free(str);
    return (0);
}