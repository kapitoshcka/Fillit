/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 16:40:52 by fkarnats          #+#    #+#             */
/*   Updated: 2019/01/04 16:41:00 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"
#include "fcntl.h"

/*
** Entry point for our application
*/

int	main(int argc, char **argv)
{
	t_list	*list;
	t_map	*map;

	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (1);
	}
	if ((list = read_tetri(open(argv[1], O_RDONLY))) == NULL)
	{
		ft_putstr("error\n");
		return (1);
	}
	map = solve_map(list);
	print_map(map);
	free_map(map);
	free_list(list);
	return (0);
}
