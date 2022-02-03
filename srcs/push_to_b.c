/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:40:40 by letumany          #+#    #+#             */
/*   Updated: 2022/02/04 00:25:35 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	keep_me(void)
{
	int i;
	int index;

	s_core.c_c = 2;
	s_core.C[0] = s_core.max;
	s_core.C[1] = 0;
	i = 0;
	index = 1;
	while (s_core.A[i] > 0)
	{
		i++;
	}
	while (s_core.A[i] < s_core.max)
	{
		if (s_core.A[i] == index)
		{
			s_core.C[s_core.c_c] = s_core.A[i];
			++s_core.c_c;
			++index;
		}
		if (i == s_core.c_a - 1)
		{
			i = 0;
			continue;
		}
		++i;
	}
}

int		ps_finder(int c)
{
	int i = 0;
	while (i <= s_core.c_c)
	{
		if (s_core.C[i] == c)
			return (1);
		++i;
	}
	return (0);
}

void	push_to_b(void)
{
	int i;
	
	i = 0;
	while (i < s_core.c_a)
	{
		if (ps_finder(s_core.A[0]) > 0)
		{
			ra(1);
			++i;
			continue;
		}
		pb();
		if(s_core.B[0] > s_core.mid)
			rb(1);
	}
}
