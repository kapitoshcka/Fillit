/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 18:22:10 by fkarnats          #+#    #+#             */
/*   Updated: 2019/01/04 18:22:10 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each character of the string passed
** as argument. Each character is passed by address to f to be
** modified if necessary.
** Param. #1 The string to iterate.
** Param. #2 The function to apply to each character of s.
** Return value None.
** Libc functions None.
*/

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(s + i);
		i++;
	}
}

/*
** void my_func(char *str)
** {
** 	printf("My inner function %s\n", str);
** }
**
** int main()
** {
** 	char str[10] = "Hello.";
** 	printf("The result is %s\n", str);
** 	ft_striter(str, my_func);
** 	printf("The result is %s\n", str);
** 	return 0;
** }
*/
