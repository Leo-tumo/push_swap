/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <letumany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:19:32 by letumany          #+#    #+#             */
/*   Updated: 2022/02/03 17:50:03 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		is_sorted(void)
{
	int		i;

	i = 0;
	while(i + 1 < s_array.size)
	{
		if(s_core.A[i] < s_core.A[i + 1])
			++i;
		else
			return;
	}
	printf("U dumb, already listed\n");
	exit (0);
}

void		is_repeated(void)
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
			if(s_core.A[i] == s_core.A[j])
			{
				printf("Error\nRepeating numbers\n");
				exit(0);
			}
			++j;
		}
		++i;
	}
}