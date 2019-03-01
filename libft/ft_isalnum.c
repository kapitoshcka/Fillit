/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 18:22:10 by fkarnats          #+#    #+#             */
/*   Updated: 2019/01/04 18:22:10 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isalnum -- alphanumeric character test
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

/*
** int main()
** {
** 	char c, result;
**
**     c = '*';
**  	result = ft_isalnum(c);
**     printf("The result is %d\n", result);
**
**     c = 'g';
**  	result = ft_isalnum(c);
**     printf("The result is %d\n", result);
**
**     c = '+';
**  	result = ft_isalnum(c);
**     printf("The result is %d\n", result);
**
**  	return 0;
** }
*/
