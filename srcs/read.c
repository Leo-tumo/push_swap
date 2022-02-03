/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:14:52 by letumany          #+#    #+#             */
/*   Updated: 2022/02/03 14:30:34 by letumany         ###   ########.fr       */
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
	for(int i = 0; i < s_core.c_a; ++i)
	sort(A, B);
	while(i >= 0)
	{
		printf("\tA[%d]\t=\t%d\n", i, A[i]);
		i--;
	}
	printf("s_array.size = %d\n", s_array.size);
}


void		five_sort(int *A, int *B)
{
	// for(int i = 0; i < 5; ++i)
	// 	printf("beginning %d\n", A[i]);
	push_smallest(A, B, 5, 0);
	// for(int i = 0; i < 4; ++i)
	// 	printf("2nd %d\n", A[i]);
	push_smallest(A, B, 4, 1);
	// for(int i = 0; i < 3; ++i)
	// 	printf("before %d\n", A[i]);
	sort_three(A);
	// for(int i = 0; i < 3; ++i)
	// 	printf("after %d\n", A[i]);
	pa(A, B, 3, 2);
	pa(A, B, 4, 1);
}

void		four_sort(int *A, int *B)
{
	push_smallest(A, B, 4, 0);
	sort_three(A);
	pa(A, B, 3, 1);
}

void		sort_three(int *A)
{
	if (A[0] < A[1] && A[0] < A[2] && A[1] > A[2])
	{
		sa(A);
		ra(A, 3);
	}
	else if (A[0] > A[1] && A[0] < A[2])
		sa(A);
	else if(A[0] < A[1] && A[0] > A[2])
		rra(A, 3);
	else if(A[0] > A[2] && A[1] < A[2] && A[0] > A[1])
		ra(A, 3);
	else if(A[0] > A[1] && A[1] > A[2])
	{
		sa(A);
		rra(A, 3);
	}
}

// void	push_smallest(int *A, int *B, int a, int b)
// {
// 	int		i;
// 	int		tmp;

// 	i = 1;
// 	tmp = A[0];
// 	while(i < a)
// 	{
// 		if(A[i] < tmp)
// 			tmp = A[i];
// 		++i;
// 	}
// 	i = find_position(A, tmp, a);
// 	if(i <= a / 2)
// 	{
// 		while(A[0] != tmp)
// 			ra(A, a);
// 	}
// 	else
// 	{
// 		while(A[0] != tmp)
// 			rra(A, a);
// 	}
// 	pb(A, B, a, b);
// }

// int			find_position(int *A, int num, int size)
// {
// 	int		i;

// 	i = 0;
// 	while(i < size)
// 	{
// 		if(num == A[i])
// 			break;
// 		++i;
// 	}
// 	return (i);
// }

void	push_smallest(int *A, int *B, int a, int b)
{
	int		i = 1, smallest = A[0];
	while (i + 1 < a)
	{
		if (A[i] < smallest)
			smallest = A[i];
		++i;
	}
	int j = 0;
	while(j < a)
	{
		if (A[j] == smallest)
			break;
		++j;
	}
	for(int i = 0; i < a; ++i)
		printf("step 1 %d\n", A[i]);
	while (A[0] > smallest)
	{
			rra(A, a);
	}
	pb(A, B, a, b);
}
