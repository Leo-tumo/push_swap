/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:00:49 by letumany          #+#    #+#             */
/*   Updated: 2022/02/04 17:15:08 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(void)
{
	int		tmp;

	tmp = s_core.a[0];
	s_core.a[0] = s_core.a[1];
	s_core.a[1] = tmp;
	write(1, "sa\n", 3);
}

void	sb(void)
{
	int		tmp;

	tmp = s_core.b[0];
	s_core.b[0] = s_core.b[1];
	s_core.b[1] = tmp;
	write(1, "sb\n", 3);
}

void	ss(void)
{
	sa();
	sb();
}

void	pa(void)
{
	int	i;

	i = s_core.c_a;
	while (i > 0)
	{
		s_core.a[i] = s_core.a[i - 1];
		--i;
	}
	s_core.a[0] = s_core.b[0];
	s_core.c_b -= 1;
	while (i < s_core.c_b)
	{
		s_core.b[i] = s_core.b[i + 1];
		i++;
	}
	s_core.c_a += 1;
	write(1, "pa\n", 3);
}

void	pb(void)
{
	int	i;

	i = s_core.c_b;
	while (i > 0)
	{
		s_core.b[i] = s_core.b[i - 1];
		i--;
	}
	s_core.b[0] = s_core.a[0];
	s_core.c_a -= 1;
	while (i < s_core.c_a)
	{
		s_core.a[i] = s_core.a[i + 1];
		++i;
	}
	s_core.c_b += 1;
	write(1, "pb\n", 3);
}
