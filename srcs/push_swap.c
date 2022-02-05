/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:54:16 by letumany          #+#    #+#             */
/*   Updated: 2022/02/05 23:50:34 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_base	stack;

	arg_checker(argc, argv, &stack);
	stack.a = (int *)malloc(sizeof(int) * stack.start.size);
	stack.b = (int *)malloc(sizeof(int) * stack.start.size);
	stack.c = (int *)malloc(sizeof(int) * stack.start.size);
	if (argc > 2)
		stack_fill(argv, argc, &stack);
	else if (argc == 2)
		stack_fill_q(ft_split(argv[1], ' '), &stack);
	else
		finito(&stack);
	if (!stack.a || !stack.b || !stack.c)
		ft_error("memory problems");
	indexer(stack.start.size, &stack);
	is_sorted(&stack);
	sort(&stack);
}
