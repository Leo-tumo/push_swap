/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:23:12 by letumany          #+#    #+#             */
/*   Updated: 2022/02/03 15:51:42 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	final_sort(int *A)
{
	int		i;
	
	i = 1;
	while (A[i] != 0)
		++i;
	while (A[0] != 0)
	{
		if (i > s_core.c_a / 2)
			rra(A, s_core.c_a);
		else
			ra(A, s_core.c_a);
	}
}

void	finito(int *A, int *B)
{
	free(A);
	free(B);
	free(s_core.C);
	exit(0);
}

void	sort(void)
{
	int		i;

	i = 0;
	if (s_core.c_a < 4)
		sort_three(s_core.A);
	else if (s_core.c_a < 6 && s_core.c_a > 3)
		five_sort();
	else
	{
		keep_me(s_core.A, s_core.C, s_core.c_a);
		push_to_b();
		
		while (s_core.c_b)
		{
			compute();
			perform();
		}
		final_sort();
	}
	finito();
}