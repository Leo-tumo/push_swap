/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:40:40 by letumany          #+#    #+#             */
/*   Updated: 2022/02/01 13:05:43 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	keep_me(int *A, int *C, int c_a)
{
	int i;
	int index;

	s_core.c_c = 1;
	C[0] = s_core.max;
	i = 0;
	index = 1;
	while (A[i] > 0)
	{
		i++;
	}
	while (A[i] < s_core.max)
	{
		if (A[i] == index)
		{
			C[s_core.c_c] = A[i];
			printf("C[s_core.c_c] = %d\n", C[s_core.c_c]);
			++s_core.c_c;
			++index;
		}
		if (i == c_a - 1)
		{
			i = 0;
			continue;
		}
		++i;
	}
}

int		ps_finder(int *C, int c)
{
	int i = 0;
	while (i <= s_core.c_c)
	{
		if (C[i] == c)
			return (1);
		++i;
	}
	return (0);
}

void	push_to_b(int *A, int *B)
{
	int i;
	
	i = 0;
	while (i < s_core.c_a - 3 - s_core.c_c)
	{
		if (/* A[0] == s_core.max || */ ps_finder(s_core.C, A[0]) > 0)
		{
			printf("A[0] = %d\n", A[0]);
			ra(A, s_core.c_a);
			++i;
			continue;
		}
		pb(A, B, s_core.c_a, s_core.c_b);
		++i;
	}
}
