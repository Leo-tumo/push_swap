/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:40:40 by letumany          #+#    #+#             */
/*   Updated: 2022/02/06 00:23:00 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	keep_me(t_base *base)
{
	int	i;
	int	index;

	base->c_c = 2;
	base->c[0] = base->max;
	base->c[1] = 0;
	i = 0;
	index = 1;
	while (base->a[i] > 0)
		i++;
	while (base->a[i] < base->max)
	{
		if (base->a[i] == index)
		{
			base->c[base->c_c] = base->a[i];
			++base->c_c;
			++index;
		}
		if (i == base->c_a - 1)
		{
			i = 0;
			continue ;
		}
		++i;
	}
}

int	ps_finder(int c, t_base *base)
{
	int	i;

	i = 0;
	while (i <= base->c_c)
	{
		if (base->c[i] == c)
			return (1);
		++i;
	}
	return (0);
}

void	push_to_norme(t_base *base)
{
	int	i;

	i = 0;
	while (i < base->c_a)
	{
		if (ps_finder(base->a[0], base) > 0)
		{
			ra(1, base);
			++i;
			continue ;
		}
		pb(base);
	}
}

void	push_to_b(t_base *base)
{
	int	i;

	i = 0;
	while (i < base->c_a)
	{
		if (ps_finder(base->a[0], base) > 0 || base->a[0] <= base->max / 4)
		{
			ra(1, base);
			++i;
			continue ;
		}
		pb(base);
		if (base->b[0] > base->mid)
			rb(1, base);
	}
	push_to_norme(base);
}
