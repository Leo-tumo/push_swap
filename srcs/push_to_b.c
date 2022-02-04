/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:40:40 by letumany          #+#    #+#             */
/*   Updated: 2022/02/04 18:06:04 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	keep_me(void)
{
	int	i;
	int	index;

	s_core.c_c = 2;
	s_core.c[0] = s_core.max;
	s_core.c[1] = 0;
	i = 0;
	index = 1;
	while (s_core.a[i] > 0)
		i++;
	while (s_core.a[i] < s_core.max)
	{
		if (s_core.a[i] == index)
		{
			s_core.c[s_core.c_c] = s_core.a[i];
			++s_core.c_c;
			++index;
		}
		if (i == s_core.c_a - 1)
		{
			i = 0;
			continue ;
		}
		++i;
	}
}

int	ps_finder(int c)
{
	int	i;

	i = 0;
	while (i <= s_core.c_c)
	{
		if (s_core.c[i] == c)
			return (1);
		++i;
	}
	return (0);
}

void	push_to_norme(void)
{
	int	i;

	i = 0;
	while (i < s_core.c_a)
	{
		if (ps_finder(s_core.a[0]) > 0)
		{
			ra(1);
			++i;
			continue ;
		}
		pb();
	}
}

void	push_to_b(void)
{
	int	i;

	i = 0;
	while (i < s_core.c_a)
	{
		if (ps_finder(s_core.a[0]) > 0 || s_core.a[0] <= s_core.max / 3)
		{
			ra(1);
			++i;
			continue ;
		}
		pb();
		if (s_core.b[0] > s_core.mid)
			rb(1);
	}
	push_to_norme();
}
