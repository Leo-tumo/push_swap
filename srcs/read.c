/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:14:52 by letumany          #+#    #+#             */
/*   Updated: 2022/02/03 15:46:38 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int 	main(int argc, char **argv)
{ 
    int		n;
	int		i;

	s_array.size = argc - 1;
	s_core.A = (int *)malloc(sizeof(int) * s_array.size);
	s_core.B = (int *)malloc(sizeof(int) * s_array.size);
	s_core.C = (int *)malloc(sizeof(int) * s_array.size);
	n = 1;
	i = 0;
	while(n <= s_array.size)
	{
		if(argv[n][0] == '-')
		{
			argv[n][0] = '+';
			s_core.A[i] = atoi(argv[n]);
			s_core.A[i] *= -1;
		}
		else if(argv[n][0] == '0')
			s_core.A[i] = 0;
		else
			s_core.A[i] = atoi(argv[n]);
		n++;
		if(n < argc)
			i++;
	}
	indexer(s_array.size);
	is_sorted();
	sort();
	
}


void		five_sort()
{
	push_smallest(5, 0);
	push_smallest(4, 1);
	sort_three(s_core.A);
	pa();
	pa();
}

void		four_sort(int *A, int *B)
{
	push_smallest(4, 0);
	sort_three(s_core.A);
	pa();
}

void		sort_three(int *A)
{
	if (A[0] < A[1] && A[0] < A[2] && A[1] > A[2])
	{
		sa();
		ra();
	}
	else if (A[0] > A[1] && A[0] < A[2])
		sa();
	else if(A[0] < A[1] && A[0] > A[2])
		rra();
	else if(A[0] > A[2] && A[1] < A[2] && A[0] > A[1])
		ra();
	else if(A[0] > A[1] && A[1] > A[2])
	{
		sa();
		rra();
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

void	push_smallest(int a, int b)
{
	int		i = 1, smallest = s_core.A[0];
	while (i + 1 < a)
	{
		if (A[i] < smallest)
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
	while (s_core.A[0] > smallest)
	{
			rra();
	}
	pb();
}
