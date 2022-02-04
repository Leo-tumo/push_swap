/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:11:59 by letumany          #+#    #+#             */
/*   Updated: 2022/02/04 17:21:13 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_smallest(int a)
{
	int	i;
	int	smallest;

	i = 1;
	smallest = s_core.a[0];
	while (i < a)
	{
		if (s_core.a[i] < smallest)
			smallest = s_core.a[i];
		++i;
	}
	i = -1;
	while (i++ < a - 1)
	{
		if (s_core.a[i] == smallest)
			break ;
	}
	while (s_core.a[0] != smallest)
	{
		if (i > s_core.c_a / 2)
			rra(1);
		else
			ra(1);
	}
	pb();
}

void	sort_blood(void)
{
	if (s_core.a[0] < s_core.a[1] && s_core.a[0]
		< s_core.a[2] && s_core.a[1] > s_core.a[2])
	{
		sa();
		ra(1);
	}
	else if (s_core.a[0] > s_core.a[1] && s_core.a[0] < s_core.a[2])
		sa();
	else if (s_core.a[0] < s_core.a[1] && s_core.a[0] > s_core.a[2])
		rra(1);
	else if (s_core.a[0] > s_core.a[2] && s_core.a[1]
		< s_core.a[2] && s_core.a[0] > s_core.a[1])
		ra(1);
	else if (s_core.a[0] > s_core.a[1] && s_core.a[1] > s_core.a[2])
	{
		sa();
		rra(1);
	}
}

void	six_sort(void)
{
	int	diff;
	int	i;

	i = 0;
	diff = s_array.size - 3;
	while (i < diff)
	{
		push_smallest(s_array.size - i);
		++i;
	}
	sort_blood();
	i = 0;
	while (i < diff)
	{
		pa();
		++i;
	}
}
