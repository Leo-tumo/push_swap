/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:00:49 by letumany          #+#    #+#             */
/*   Updated: 2022/02/01 12:22:50 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(int *A)
{
	int		tmp;
	
	tmp = A[0];
	A[0] = A[1];
	A[1] = tmp;
	write(1, "sa\n", 3);
}

void	sb(int *B)
{
	int		tmp;
	
	tmp = B[0];
	B[0] = B[1];
	B[1] = tmp;
	write(1, "sb\n", 3);
}


void	ss(int *A, int *B)
{
	sa(A);
	sb(B);
}

void	pa(int *A, int *B, int c_a, int c_b)
{
	int i;

	i = c_b;
	while(i > 0)
	{
		B[i] = B[i - 1];
		--i;
	}
	B[0] = A[0];
	while(i < c_a - 1)
	{
		A[i] = A[i + 1];
		i++;
	}
	c_a += 1;
	c_b -= 1;
	write(1, "pa\n", 3);
}

void	pb(int *A, int *B, int c_a, int c_b)
{
	int i;

	i = c_a;
	while(i > 0)
	{
		A[i] = A[i - 1];
		--i;
	}
	A[0] = B[0];
	while(i < c_b - 1)
	{
		B[i] = B[i + 1];
		i++;
	}
	c_a -= 1;
	c_b += 1;
	write(1, "pb\n", 3);
}

