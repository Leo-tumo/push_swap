/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:34:18 by letumany          #+#    #+#             */
/*   Updated: 2022/02/05 23:35:24 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(int bool, t_base *base)
{
	int		i;
	int		tmp;

	tmp = base->a[0];
	i = 0;
	while (i < base->c_a - 1)
	{
		base->a[i] = base->a[i + 1];
		++i;
	}
	base->a[i] = tmp;
	if (bool == 1)
		write(1, "ra\n", 3);
}

void	rb(int bool, t_base *base)
{
	int		i;
	int		tmp;

	tmp = base->b[0];
	i = 0;
	while (i < base->c_b - 1)
	{
		base->b[i] = base->b[i + 1];
		++i;
	}
	base->b[i] = tmp;
	if (bool == 1)
		write(1, "rb\n", 3);
}

void	rr(t_base *base)
{
	ra(0, base);
	rb(0, base);
	write(1, "rr\n", 3);
}

void	rra(int bool, t_base *base)
{
	int		i;
	int		tmp;

	i = base->c_a - 1;
	tmp = base->a[i];
	while (i > 0)
	{
		base->a[i] = base->a[i - 1];
		--i;
	}
	base->a[0] = tmp;
	if (bool == 1)
		write(1, "rra\n", 4);
}

void	rrb(int bool, t_base *base)
{
	int		i;
	int		tmp;

	i = base->c_b - 1;
	tmp = base->b[i];
	while (i > 0)
	{
		base->b[i] = base->b[i - 1];
		--i;
	}
	base->b[0] = tmp;
	if (bool == 1)
		write(1, "rrb\n", 4);
}
