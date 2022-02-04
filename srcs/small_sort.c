/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:11:59 by letumany          #+#    #+#             */
/*   Updated: 2022/02/04 16:19:01 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_smallest(int a)
{
	int		i = 1, smallest = s_core.A[0];
	while (i < a)
	{
		if (s_core.A[i] < smallest)
			smallest = s_core.A[i];
		++i;
	}
	int j = 0;
	while(j < a)
	{
		if (s_core.A[j] == smallest)
			break;
		++j;
	}
	while (s_core.A[0] != smallest)
	{
		if (j > s_core.c_a / 2)
			rra(1);
		else 
			ra(1);
	}
	pb();
}

void		sort_blood(void)
{
	if (s_core.A[0] < s_core.A[1] && s_core.A[0] < s_core.A[2] && s_core.A[1] > s_core.A[2])
	{
		sa();
		ra(1);
	}
	else if (s_core.A[0] > s_core.A[1] && s_core.A[0] < s_core.A[2])
		sa();
	else if(s_core.A[0] < s_core.A[1] && s_core.A[0] > s_core.A[2])
		rra(1);
	else if(s_core.A[0] > s_core.A[2] && s_core.A[1] < s_core.A[2] && s_core.A[0] > s_core.A[1])
		ra(1);
	else if(s_core.A[0] > s_core.A[1] && s_core.A[1] > s_core.A[2])
	{
		sa();
		rra(1);
	}
}

void		six_sort()
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
