/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:37:07 by letumany          #+#    #+#             */
/*   Updated: 2022/01/31 16:30:43 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		count_ra(int *A, int b)
{
	int		i;

	i = 0;
	if (A[0] > b && A[s_core.c_a - 1] < b)
	{
		s_core.current.ra = 0;
		return;
	}
	while (i < s_core.c_a)
	{
		if (b > A[i] && b < A[i + 1])
		{
			++i;
			if (i > s_core.c_a / 2)
				s_core.current.rra = s_core.c_a - i;
			else
				s_core.current.ra = i;
		}
		++i;
	}
}

void	merge_rr(void)
{
	while (s_core.current.ra && s_core.current.rb)
	{
		++s_core.current.rr;
		--s_core.current.ra;
		--s_core.current.rb;
	}
	while (s_core.current.rra && s_core.current.rrb)
	{
		++s_core.current.rrr;
		--s_core.current.rra;
		--s_core.current.rrb;
	}
}

void	copy_to_best(void)
{
	s_core.best.ra = s_core.current.ra;
	s_core.best.rb = s_core.current.rb;
	s_core.best.rra = s_core.current.rra;
	s_core.best.rrb = s_core.current.rrb;
	s_core.best.rr = s_core.current.rr;
	s_core.best.rrr = s_core.current.rrr;
}

void	score_init(void)
{
	s_core.best.ra = 0;
	s_core.current.ra = 0;
	s_core.best.rb = 0;
	s_core.current.rb = 0;
	s_core.best.rra = 0;
	s_core.current.rra = 0;
	s_core.best.rrb = 0;
	s_core.current.rrb = 0;
	s_core.best.rr = 0;
	s_core.current.rr = 0;
	s_core.best.rrr = 0;
	s_core.current.rrr = 0;
	s_core.best.score = 10000000;
	s_core.current.score = 0;
	
}

void	compute(int *A, int *B)
{
	int		i;
	
	i = 0;
	score_init();
	while (i < s_core.c_b)
	{
		if(i > s_core.c_b / 2)
			s_core.current.rrb = (s_core.c_b - i);
		else
			s_core.current.rb = i;
		count_ra(A, B[i]);
		merge_rr();
		s_core.current.score = s_core.current.ra + s_core.current.rb 
			+ s_core.current.rra + s_core.current.rrb 
				+ s_core.current.rr + s_core.current.rrr;
		if (s_core.current.score < s_core.best.score)
			copy_to_best();
		++i;
	}
}
