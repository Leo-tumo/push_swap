/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:23:12 by letumany          #+#    #+#             */
/*   Updated: 2022/02/01 12:19:01 by letumany         ###   ########.fr       */
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

void	sort(int *A, int *B)
{
	int		i;

	i = 0;
	if (s_core.c_a < 4)
		sort_three(A, B);
	else if (s_core.c_a < 6 && s_core.c_a > 3)
		five_sort(A, B, s_core.c_a);
	else
	{
		keep_me(A, s_core.C, s_core.c_a);
		push_to_b(A, B);
		
		while (s_core.c_b)
		{
			compute(A, B);
			perform(A, B);
		}
		final_sort(A);
	}
	finito(A, B);
}