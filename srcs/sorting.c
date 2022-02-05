/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:23:12 by letumany          #+#    #+#             */
/*   Updated: 2022/02/05 23:34:40 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	final_sort(t_base *base)
{
	int		i;

	i = 1;
	while (base->a[i] != 0)
		++i;
	while (base->a[0] != 0)
	{
		if (i > base->c_a / 2)
			rra(1, base);
		else
			ra(1, base);
	}
}

void	small_sort(t_base *base)
{
	if (base->c_a == 2)
		sa(base);
	six_sort(base);
}

void	finito(t_base *base)
{
	free(base->a);
	free(base->b);
	free(base->c);
	exit(0);
}

void	sort(t_base *base)
{
	int		i;

	i = 0;
	if (base->c_a < 7)
		small_sort(base);
	else
	{
		keep_me(base);
		push_to_b(base);
		while (i < base->mid / 2)
		{
			score_init_max(base);
			compute(base->mid, base);
			perform(base);
			++i;
		}
		while (base->c_b)
		{
			score_init_max(base);
			compute(base->max, base);
			perform(base);
		}
		final_sort(base);
	}
	finito(base);
}
