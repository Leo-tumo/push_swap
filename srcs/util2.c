/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:34:18 by letumany          #+#    #+#             */
/*   Updated: 2022/01/27 18:45:10 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(int *A, int c_a)
{
	int		i;
	int 	tmp;
	
	tmp = A[0];
	i = 0;
	while(i < c_a - 1)
	{
		A[i] = A[i + 1];
		++i;
	}
	A[i] = tmp;
	write(1, "ra\n", 3);
}

void	rb(int *B, int c_b)
{
	int		i;
	int 	tmp;
	
	tmp = B[0];
	i = 0;
	while(i < c_b - 1)
	{
		B[i] = B[i + 1];
		++i;
	}
	B[i] = tmp;
	write(1, "rb\n", 3);
}

void	rr(int *A, int *B, int c_a, int c_b)
{
	ra(A, c_a);
	rb(B, c_b);
	write(1, "rr\n", 3);
}

void	rra(int *A, int c_a)
{
	int		i;
	int		tmp;

	i = c_a - 1;
	tmp = A[i];
	while(i > 0)
	{
		A[i] = A[i - 1];
		++i;
	}
	A[0] = tmp;
	write(1, "rra\n", 4);
}

void	rrb(int *B, int c_b)
{
	int		i;
	int		tmp;

	i = c_b - 1;
	tmp = B[i];
	while(i > 0)
	{
		B[i] = B[i - 1];
		++i;
	}
	B[0] = tmp;
	write(1, "rrb\n", 4);
}

