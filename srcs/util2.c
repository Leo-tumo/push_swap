/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:34:18 by letumany          #+#    #+#             */
/*   Updated: 2022/02/04 17:16:17 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(int bool)
{
	int		i;
	int		tmp;

	tmp = s_core.a[0];
	i = 0;
	while (i < s_core.c_a - 1)
	{
		s_core.a[i] = s_core.a[i + 1];
		++i;
	}
	s_core.a[i] = tmp;
	if (bool == 1)
		write(1, "ra\n", 3);
}

void	rb(int bool)
{
	int		i;
	int		tmp;

	tmp = s_core.b[0];
	i = 0;
	while (i < s_core.c_b - 1)
	{
		s_core.b[i] = s_core.b[i + 1];
		++i;
	}
	s_core.b[i] = tmp;
	if (bool == 1)
		write(1, "rb\n", 3);
}

void	rr(void)
{
	ra(0);
	rb(0);
	write(1, "rr\n", 3);
}

void	rra(int bool)
{
	int		i;
	int		tmp;

	i = s_core.c_a - 1;
	tmp = s_core.a[i];
	while (i > 0)
	{
		s_core.a[i] = s_core.a[i - 1];
		--i;
	}
	s_core.a[0] = tmp;
	if (bool == 1)
		write(1, "rra\n", 4);
}

void	rrb(int bool)
{
	int		i;
	int		tmp;

	i = s_core.c_b - 1;
	tmp = s_core.b[i];
	while (i > 0)
	{
		s_core.b[i] = s_core.b[i - 1];
		--i;
	}
	s_core.b[0] = tmp;
	if (bool == 1)
		write(1, "rrb\n", 4);
}
