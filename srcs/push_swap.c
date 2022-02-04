/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:54:16 by letumany          #+#    #+#             */
/*   Updated: 2022/02/04 16:28:44 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


int 	main(int argc, char **argv)
{
	arg_checker(argc, argv);
	s_core.A = (int *)malloc(sizeof(int) * s_array.size);
	s_core.B = (int *)malloc(sizeof(int) * s_array.size);
	s_core.C = (int *)malloc(sizeof(int) * s_array.size);
	
	if (argc > 2)
		stack_fill(argv, argc);
	else if (argc == 2)
		stack_fill_q(ft_split(argv[1], ' '));
	else
		finito();
	if (!s_core.A || !s_core.B || !s_core.C)
		ft_error("memory problems");
	indexer(s_array.size);
	is_sorted();
	sort();
}
