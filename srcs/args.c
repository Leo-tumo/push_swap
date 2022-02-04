/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:14:03 by letumany          #+#    #+#             */
/*   Updated: 2022/02/04 16:52:19 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	stack_fill(char **av, int ac)
{
	int		n;
	int		i;

	n = 1;
	i = 0;
	while (n <= s_array.size)
	{
		if (av[n][0] == '-')
		{
			av[n][0] = '+';
			s_core.a[i] = atoi(av[n]);
			s_core.a[i] *= -1;
		}
		else if (av[n][0] == '0')
			s_core.a[i] = 0;
		else
			s_core.a[i] = atoi(av[n]);
		n++;
		if (n < ac)
			i++;
	}
}

void	stack_fill_q(char **av)
{
	int		n;
	int		i;

	n = 0;
	i = 0;
	while (n < s_array.size)
	{
		if (av[n][0] == '-')
		{
			av[n][0] = '+';
			s_core.a[i] = atoi(av[n]);
			s_core.a[i] *= -1;
		}
		else if (av[n][0] == '0')
			s_core.a[i] = 0;
		else
			s_core.a[i] = atoi(av[n]);
		n++;
		if (n < s_array.size)
			i++;
	}
}

void	arg_checker(int argc, char **argv)
{
	if (argc > 2)
	{
		s_array.size = argc - 1;
		check_num(argv, argc);
		return ;
	}
	else if (argc == 2)
	{
		check_num_q(argv[1]);
	}	
}
