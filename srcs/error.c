/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:19:32 by letumany          #+#    #+#             */
/*   Updated: 2022/02/04 16:08:50 by letumany         ###   ########.fr       */
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
				ft_error("Error\nRepeating numbers\n");
				exit(0);
			}
			++j;
		}
		++i;
	}
}

int ft_error(char *str)
{
	 while (*str)
    {
        write(1, &(*str), 1);
        ++str;
    }
    exit(1);
	return (1);
}

void	check_num(char **av, int ac)
{
	int i;
	int	j;
	
	i = 1;
	while (i < ac)
	{
		j = 0;
		while(av[i][j])
		{
			if (is_digit(av[i][j]))
				ft_error("wrong char");
			if (av[i][j] == '-')
			{
				if (!(av[i][j + 1] >= '0' && av[i][j + 1] <= '9'))
					ft_error("wrong input");
			}
			++j;
		}
		++i;
	}
}

void	check_num_q(char *av)
{
	int i;

	i = 0;
	s_array.size = (int)length(av, ' ');
	while (av[i])
	{
		if (is_digit(av[i]))
			ft_error("wrong char");
		if (av[i] == '-')
		{
			if (!(av[i + 1] >= '0' && av[i + 1] <= '9'))
				ft_error("wrong input");
		}
		++i;
	}
}
