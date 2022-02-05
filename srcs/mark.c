/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mark.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:35:52 by letumany          #+#    #+#             */
/*   Updated: 2022/02/05 23:36:56 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_min(int size, t_base *base)
{
	int		i;
	int		min;

	i = 0;
	min = base->a[i];
	while (i < size)
	{
		if (base->a[i] < min)
			min = base->a[i];
		i++;
	}
	return (min);
}

int	find_max(int size, t_base *base)
{
	int		i;
	int		max;

	i = 0;
	max = base->a[i];
	while (i < size)
	{
		if (base->a[i] > max)
			max = base->a[i];
		i++;
	}
	return (max);
}

void	indexer(int size, t_base *base)
{
	is_repeated(base);
	base->start.min = find_min(size, base);
	base->start.max = find_max(size, base);
	markup(base->start.size, base->start.max + 1, base->start.min - 1, base);
	remark(size, base);
	base->max = base->start.size - 1;
	base->c_a = base->start.size;
	base->c_b = 0;
	base->mid = (base->start.size + 1) / 2;
}

void	markup(int size, int index, int prev, t_base *base)
{
	int		i;
	int		tmp;

	if (index > size + base->start.max)
		return ;
	tmp = base->start.max;
	i = 0;
	while (i < size)
	{
		if (base->a[i] > prev && base->a[i] <= tmp)
			tmp = base->a[i];
		++i;
	}
	markup_norme(&i, &index, &tmp, base);
	markup(size, ++index, tmp, base);
}

void	remark(int size, t_base *base)
{
	int		i;

	i = 0;
	while (i < size)
	{
		base->a[i] -= (base->start.max + 1);
		++i;
	}
	return ;
}
