/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:34:18 by letumany          #+#    #+#             */
/*   Updated: 2022/02/03 15:27:16 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(void)
{
	int		i;
	int 	tmp;
	
	tmp = s_core.A[0];
	i = 0;
	while(i < s_core.c_a - 1)
	{
		s_core.A[i] = s_core.A[i + 1];
		++i;
	}
	s_core.A[i] = tmp;
	write(1, "ra\n", 3);
}

void	rb(void)
{
	int		i;
	int 	tmp;
	
	tmp = s_core.B[0];
	i = 0;
	while(i < s_core.c_b - 1)
	{
		s_core.B[i] = s_core.B[i + 1];
		++i;
	}
	s_core.B[i] = tmp;
	write(1, "rb\n", 3);
}

void	rr(void)
{
	ra();
	rb();
	write(1, "rr\n", 3);
}

void	rra(void)
{
	int		i;
	int		tmp;

	i = s_core.c_a - 1;
	tmp = s_core.A[i];
	while(i > 0)
	{
		s_core.A[i] = s_core.A[i - 1];
		++i;
	}
	s_core.A[0] = tmp;
	write(1, "rra\n", 4);
}

void	rrb(void)
{
	int		i;
	int		tmp;

	i = s_core.c_b - 1;
	tmp = s_core.B[i];
	while(i > 0)
	{
		s_core.B[i] = s_core.B[i - 1];
		++i;
	}
	s_core.B[0] = tmp;
	write(1, "rrb\n", 4);
}
