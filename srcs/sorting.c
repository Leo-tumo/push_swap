/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <letumany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:23:12 by letumany          #+#    #+#             */
/*   Updated: 2022/02/03 19:21:32 by letumany         ###   ########.fr       */
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
			rra();
		else
			ra();
	}
}

void small_sort(void)
{
	if(s_core.c_a == 2)
		sa();
	else if (s_core.c_a == 3)
		sort_three();
	else if (s_core.c_a == 4)
		four_sort();
	else
		five_sort();
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
	if (s_core.c_a < 6)
		small_sort();
	else
	{
		keep_me();
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