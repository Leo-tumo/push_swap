/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <letumany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:46:38 by letumany          #+#    #+#             */
/*   Updated: 2022/02/03 17:33:57 by letumany         ###   ########.fr       */
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
	push_smallest(5);
	push_smallest(4);
	sort_three();
	pa();
	pa();
}

void		four_sort(void)
{
	push_smallest(4);
	sort_three();
	pa();
}

void		sort_three(void)
{
	if (s_core.A[0] < s_core.A[1] && s_core.A[0] < s_core.A[2] && s_core.A[1] > s_core.A[2]) // 1 3 2
	{
		sa();
		ra();
	}
	else if (s_core.A[0] > s_core.A[1] && s_core.A[0] < s_core.A[2]) // 2 1 3
		sa();
	else if(s_core.A[0] < s_core.A[1] && s_core.A[0] > s_core.A[2]) // 2 3 1
		rra();
	else if(s_core.A[0] > s_core.A[2] && s_core.A[1] < s_core.A[2] && s_core.A[0] > s_core.A[1]) // 3 1 2
		ra();
	else if(s_core.A[0] > s_core.A[1] && s_core.A[1] > s_core.A[2]) // 3 2 1
	{
		sa();
		rra();
	}
}

void	push_smallest(int a)
{
	int		i = 1, smallest = s_core.A[0];
	while (i < a)
	{
		if (s_core.A[i] < smallest)
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
	while (s_core.A[0] != smallest)
	{
		if (j > s_core.c_a / 2)
			rra();
		else 
			ra();
	}
	pb();
}
