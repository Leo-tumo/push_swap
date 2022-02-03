/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mark.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <letumany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:35:52 by letumany          #+#    #+#             */
/*   Updated: 2022/02/03 17:54:25 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_min(int size)
{
	int		i;
	int		min;

	i = 0;
	min = s_core.A[i];
	while(i < size)
	{
		if(s_core.A[i] < min)
			min = s_core.A[i];
		i++;
	}
	return (min);
}

int 	find_max(int size)
{
	int		i;
	int		max;

	i = 0;
	max = s_core.A[i];
	while(i < size)
	{
		if(s_core.A[i] > max)
			max = s_core.A[i];
		i++;
	}
	return (max);
}

void 	indexer(int size)
{
	is_repeated();
	s_array.min = find_min(size); 
	s_array.max = find_max(size);
	markup(s_array.size, s_array.max + 1, s_array.min - 1);
	remark(size);
	s_core.max = s_array.size - 1;
	s_core.c_a = s_array.size;
	s_core.c_b = 0;
	s_core.mid = (s_array.size + 1) / 2;
}

void	markup_norme(int *i, int *index, int *tmp)
{
	while(*i >= 0)
	{
		if(*tmp == 0)
		{
			if(s_core.A[*i] == 0)
				s_core.A[*i] = *index;
		}
		if(s_core.A[*i] == *tmp)
		{
			s_core.A[*i] = *index;
			break;
		}
		--(*i);
	}
}

void   markup(int size, int index, int prev)
{
	int		i;
	int		tmp;

	if(index > size + s_array.max)
		return;
	tmp = s_array.max;
	i = 0;
	while(i < size)
	{
		if(s_core.A[i] > prev && s_core.A[i] <= tmp)
			tmp = s_core.A[i];
		++i;
	}
	markup_norme(&i, &index, &tmp);
	markup(size, ++index, tmp);
}

void	remark(int size)
{
	int		i;

	i = 0;
	while(i < size)
	{
		s_core.A[i] -= (s_array.max + 1);
		++i;
	}
	return;
}
