/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:14:52 by letumany          #+#    #+#             */
/*   Updated: 2022/01/31 22:57:46 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int 	main(int argc, char **argv)
{ 
    int		n;
	int		i;
	int		*A;
	int		*B;

	s_array.size = argc - 1;
	A = (int *)malloc(sizeof(int) * s_array.size);
	B = (int *)malloc(sizeof(int) * s_array.size);
	s_core.C = (int *)malloc(sizeof(int) * s_array.size);
	n = 1;
	i = 0;
	while(n <= s_array.size)
	{
		if(argv[n][0] == '-')
		{
			argv[n][0] = '+';
			A[i] = atoi(argv[n]);
			A[i] *= -1;
		}
		else if(argv[n][0] == '0')
			A[i] = 0;
		else
			A[i] = atoi(argv[n]);
		n++;
		if(n < argc)
			i++;
	}
	indexer(A, s_array.size);
	is_sorted(A);
	sort(A, B);
	while(i >= 0)
	{
		printf("\tA[%d]\t=\t%d\n", i, A[i]);
		i--;
	}
	printf("s_array.size = %d\n", s_array.size);
}


void		five_sort(int *A, int *B, int size)
{
	push_smallest(A, B, size);
	push_smallest(A, B, size);
	sort_three(A, B);
	pb(A, B, s_core.c_a, s_core.c_b);
	pb(A, B, s_core.c_a, s_core.c_b);
}

void		sort_three(int *A, int *B)
{
	if(s_core.c_a == 2)
	{
		sa(A);
		finito(A, B);
	}
	if (A[0] < A[1] && A[0] < A[2] && A[1] < A[2])
	{
		sa(A);
		ra(A, 3);
	}
	if (A[0] > A[1] && A[0] < A[2])
		sa(A);
	if(A[0] < A[1] && A[0] > A[2])
		rra(A, 3);
	if(A[0] > A[2] && A[1] < A[2])
		ra(A, 3);
	if(A[0] > A[1] && A[1] > A[2])
	{
		sa(A);
		rra(A, 3);
	}
}

void	push_smallest(int *A, int *B, int size)
{
	int		i;
	int		tmp;

	i = 0;
	tmp = A[i];
	while(i < size)
	{
		if(A[i] < tmp)
			tmp = A[i];
		++i;
	}
	i = find_position(A, tmp, size);
	if(i <= size / 2)
	{
		while(A[0] != tmp)
			ra(A, s_core.c_a);
	}
	else
	{
		while(A[0] != tmp)
			rra(A, s_core.c_a);
	}
	pb(A, B, s_core.c_a, s_core.c_b);
}

int			find_position(int *A, int num, int size)
{
	int		i;

	i = 0;
	while(i < size)
	{
		if(num == A[i])
			break;
		++i;
	}
	return (i);
}