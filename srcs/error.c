/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:19:32 by letumany          #+#    #+#             */
/*   Updated: 2022/02/06 10:47:53 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	is_sorted(t_base *base)
{
	int		i;

	i = 0;
	while (i + 1 < base->start.size)
	{
		if (base->a[i] < base->a[i + 1])
			++i;
		else
			return ;
	}
	finito(base);
}

void	is_repeated(t_base *base)
{
	int		i;
	int		j;
	int		count;

	count = 1;
	i = 0;
	while (i < base->start.size)
	{
		j = i + 1;
		while (j < base->start.size)
		{
			if (base->a[i] == base->a[j])
				ft_error("Error\n");
			++j;
		}
		++i;
	}
}

int	ft_error(char *str)
{
	while (*str)
	{
		write(1, &(*str), 1);
		++str;
	}
	exit (1);
	return (1);
}

void	check_num(char **av, int ac)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (is_digit(av[i][j]))
				ft_error("Error\n");
			if (av[i][j] == '-')
			{
				if (!(av[i][j + 1] >= '1' && av[i][j + 1] <= '9'))
					ft_error("Error\n");
			}
			++j;
		}
		++i;
	}
}

void	check_num_q(char *av, t_base *base)
{
	int	i;

	i = 0;
	base->start.size = (int)length(av, ' ');
	while (av[i])
	{
		if (is_digit(av[i]))
			ft_error("Error\n");
		if (av[i] == '-')
		{
			if (!(av[i + 1] >= '0' && av[i + 1] <= '9'))
				ft_error("Error\n");
		}
		++i;
	}
}
