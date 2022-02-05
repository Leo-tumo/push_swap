/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:00:49 by letumany          #+#    #+#             */
/*   Updated: 2022/02/05 23:34:03 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_base *base)
{
	int		tmp;

	tmp = base->a[0];
	base->a[0] = base->a[1];
	base->a[1] = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_base *base)
{
	int		tmp;

	tmp = base->b[0];
	base->b[0] = base->b[1];
	base->b[1] = tmp;
	write(1, "sb\n", 3);
}

void	ss(t_base *base)
{
	sa(base);
	sb(base);
}

void	pa(t_base *base)
{
	int	i;

	i = base->c_a;
	while (i > 0)
	{
		base->a[i] = base->a[i - 1];
		--i;
	}
	base->a[0] = base->b[0];
	base->c_b -= 1;
	while (i < base->c_b)
	{
		base->b[i] = base->b[i + 1];
		i++;
	}
	base->c_a += 1;
	write(1, "pa\n", 3);
}

void	pb(t_base *base)
{
	int	i;

	i = base->c_b;
	while (i > 0)
	{
		base->b[i] = base->b[i - 1];
		i--;
	}
	base->b[0] = base->a[0];
	base->c_a -= 1;
	while (i < base->c_a)
	{
		base->a[i] = base->a[i + 1];
		++i;
	}
	base->c_b += 1;
	write(1, "pb\n", 3);
}
