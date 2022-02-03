/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mark.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:35:52 by letumany          #+#    #+#             */
/*   Updated: 2022/02/03 15:48:40 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_min(int *A, int size)
{
	int		i;
	int		min;

	i = 0;
	min = A[i];
	while(i < size)
	{
		if(A[i] < min)
			min = A[i];
		i++;
	}
	return (min);
}

int 	find_max(int *A, int size)
{
	int		i;
	int		max;

	i = 0;
	max = A[i];
	while(i < size)
	{
		if(A[i] > max)
			max = A[i];
		i++;
	}
	return (max);
}

void 	indexer(int size)
{
	is_repeated(s_core.A);
	s_array.min = find_min(s_core.A, size); 
	s_array.max = find_max(s_core.A, size);
	markup(s_core.A, s_array.size, s_array.max + 1, s_array.min - 1);
	remark(s_core.A, size);
	s_core.max = s_array.size - 1;
	s_core.c_a = s_array.size;
	s_core.c_b = 0;
	s_core.mid = (s_array.size + 1) / 2;
}

void	markup_norme(int *i, int *A,int *index, int *tmp)
{
	while(*i >= 0)
	{
		if(*tmp == 0)
		{
			if(A[*i] == 0)
				A[*i] = *index;
		}
		if(A[*i] == *tmp)
		{
			A[*i] = *index;
			break;
		}
		--(*i);
	}
}

void   markup(int *A, int size, int index, int prev)
{
	int		i;
	int		tmp;

	if(index > size + s_array.max)
		return;
	tmp = s_array.max;
	i = 0;
	while(i < size)
	{
		if(A[i] > prev && A[i] <= tmp)
			tmp = A[i];
		++i;
	}
	markup_norme(&i, A, &index, &tmp);
	markup(A, size, ++index, tmp);
}

void	remark(int *A, int size)
{
	int		i;

	i = 0;
	while(i < size)
	{
		A[i] -= (s_array.max + 1);
		++i;
	}
	return;
}
