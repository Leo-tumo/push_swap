/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:23:12 by letumany          #+#    #+#             */
/*   Updated: 2022/02/04 16:36:59 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	final_sort(void)
{
	int		i;
	
	i = 1;
	while (s_core.A[i] != 0)
		++i;
	while (s_core.A[0] != 0)
	{
		if (i > s_core.c_a / 2)
			rra(1);
		else
			ra(1);
	}
}

void small_sort(void)
{
	if(s_core.c_a == 2)
		sa();
	six_sort();
}

void	finito(void)
{
	free(s_core.A);
	free(s_core.B);
	free(s_core.C);
	exit(0);
}

void	sort(void)
{
	int		i;

	i = 0;
	if (s_core.c_a < 7)
		small_sort();
	else
	{
		keep_me();
		push_to_b();
		while (i < s_core.mid / 2)
		{
			score_init_max();
			compute(s_core.mid);
			perform();
			++i;
		}
		while (s_core.c_b)
		{
			score_init_max();
			compute(s_core.max);
			perform();
		}
		final_sort();
	}
	finito();
}