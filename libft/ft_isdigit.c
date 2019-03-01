/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 18:22:10 by fkarnats          #+#    #+#             */
/*   Updated: 2019/01/04 18:22:10 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isdigit, isnumber -- decimal-digit character test
*/

#include "libft.h"

int		ft_isdigit(int c)
{
	return (c <= '9' && c >= '0');
}

/*
** int main()
** {
**  	char c, result;
**
**     c = '7';
**   	result = ft_isdigit(c);
**     printf("The result is %d\n", result);
**
**     c = 'g';
**   	result = ft_isdigit(c);
**     printf("The result is %d\n", result);
**
**     c = '+';
**   	result = ft_isdigit(c);
**     printf("The result is %d\n", result);
**
**   	return 0;
** }
*/
