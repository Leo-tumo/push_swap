/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:19:32 by letumany          #+#    #+#             */
/*   Updated: 2022/01/31 16:20:46 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		is_sorted(int *A)
{
	int		i;

	i = 0;
	while(i + 1 < s_array.size)
	{
		if(A[i] < A[i + 1])
			++i;
		else
			return;
	}
	printf("U dumb, already listed\n");
	exit (0);
}

void		is_repeated(int *A)
{
	int		i;
	int		j;
	int		count;

	count = 1;
	i = 0;
	while(i < s_array.size)
	{
		j = i + 1;
		while(j < s_array.size)
		{
			if(A[i] == A[j])
			{
				printf("Error\nRepeating numbers\n");
				exit(0);
			}
			++j;
		}
		++i;
	}
}