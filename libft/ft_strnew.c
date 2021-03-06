/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 18:22:10 by fkarnats          #+#    #+#             */
/*   Updated: 2019/01/04 18:22:10 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” string ending
** with ’\0’. Each character of the string is initialized at
** ’\0’. If the allocation fails the function returns NULL.
** Param. #1 The size of the string to be allocated.
** Return value The string allocated and initialized to 0.
** Libc functions malloc(3)
**
**
** we have to add + 1 to our size_t to compensate for the terminating '\0'.
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(size + 1));
}

/*
** int main()
** {
** 	char *result = ft_strnew(5);
** 	printf("The result is %s\n", result);
** 	return 0;
** }
*/
