/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 18:22:10 by fkarnats          #+#    #+#             */
/*   Updated: 2019/01/04 18:22:10 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isascii -- test for ASCII character
*/

#include "libft.h"

int		ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
**  int main()
**  {
**   	char c, result;
**
**      c = '7';
**    	result = ft_isascii(c);
**      printf("The result is %d\n", result);
**
**      c = 'g';
**    	result = ft_isascii(c);
**      printf("The result is %d\n", result);
**
**      c = '+';
**    	result = ft_isascii(c);
**      printf("The result is %d\n", result);
**
**    	return 0;
**  }
*/
