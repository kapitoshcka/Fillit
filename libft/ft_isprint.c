/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 18:22:10 by fkarnats          #+#    #+#             */
/*   Updated: 2019/01/04 18:22:10 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isprint -- printing character test (space character inclusive)
*/

#include "libft.h"

int		ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}

/*
** int main()
** {
**  	char c, result;
**
**     c = 'NUL';
**   	result = ft_isprint(c);
**     printf("The result is %d\n", result);
**
**     c = 'g';
**   	result = ft_isprint(c);
**     printf("The result is %d\n", result);
**
**     c = '+';
**   	result = ft_isprint(c);
**     printf("The result is %d\n", result);
**
**   	return 0;
** }
*/
