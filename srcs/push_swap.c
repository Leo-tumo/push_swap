/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:54:16 by letumany          #+#    #+#             */
/*   Updated: 2022/02/04 17:04:18 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	arg_checker(argc, argv);
	s_core.a = (int *)malloc(sizeof(int) * s_array.size);
	s_core.b = (int *)malloc(sizeof(int) * s_array.size);
	s_core.c = (int *)malloc(sizeof(int) * s_array.size);
	if (argc > 2)
		stack_fill(argv, argc);
	else if (argc == 2)
		stack_fill_q(ft_split(argv[1], ' '));
	else
		finito();
	if (!s_core.a || !s_core.b || !s_core.c)
		ft_error("memory problems");
	indexer(s_array.size);
	is_sorted();
	sort();
}
