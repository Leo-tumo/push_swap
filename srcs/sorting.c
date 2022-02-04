/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:23:12 by letumany          #+#    #+#             */
/*   Updated: 2022/02/04 17:14:12 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	final_sort(void)
{
	int		i;

	i = 1;
	while (s_core.a[i] != 0)
		++i;
	while (s_core.a[0] != 0)
	{
		if (i > s_core.c_a / 2)
			rra(1);
		else
			ra(1);
	}
}

void	small_sort(void)
{
	if (s_core.c_a == 2)
		sa();
	six_sort();
}

void	finito(void)
{
	free(s_core.a);
	free(s_core.b);
	free(s_core.c);
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
