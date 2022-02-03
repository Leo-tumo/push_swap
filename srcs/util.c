/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:00:49 by letumany          #+#    #+#             */
/*   Updated: 2022/02/03 15:23:23 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(void)
{
	int		tmp;
	
	tmp = s_core.A[0];
	s_core.A[0] = s_core.A[1];
	s_core.A[1] = tmp;
	write(1, "sa\n", 3);
}

void	sb(void)
{
	int		tmp;
	
	tmp = s_core.B[0];
	s_core.B[0] = s_core.B[1];
	s_core.B[1] = tmp;
	write(1, "sb\n", 3);
}


void	ss(void)
{
	sa();
	sb();
}

void	pa(void)
{
	int i;

	i = s_core.c_b;
	while(i > 0)
	{
		s_core.B[i] = s_core.B[i - 1];
		--i;
	}
	s_core.B[0] = s_core.A[0];
	while(i < s_core.c_a - 1)
	{
		s_core.A[i] = s_core.A[i + 1];
		i++;
	}
	s_core.c_a += 1;
	s_core.c_b -= 1;
	write(1, "pa\n", 3);
}

void	pb(void)
{
	int i;

	i = s_core.c_a;
	while(i > 0)
	{
		s_core.A[i] = s_core.A[i - 1];
		--i;
	}
	s_core.A[0] = s_core.B[0];
	while(i < s_core.c_b - 1)
	{
		s_core.B[i] = s_core.B[i + 1];
		i++;
	}
	s_core.c_a -= 1;
	s_core.c_b += 1;
	write(1, "pb\n", 3);
}

