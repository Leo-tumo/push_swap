/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:14:03 by letumany          #+#    #+#             */
/*   Updated: 2022/02/06 00:57:32 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	stack_fill(char **av, int ac, t_base *base)
{
	int		n;
	int		i;

	n = 1;
	i = 0;
	while (n <= base->start.size)
	{
		if (av[n][0] == '-')
		{
			av[n][0] = '+';
			base->a[i] = ft_atoi(av[n]);
			base->a[i] *= -1;
		}
		else if (av[n][0] == '0')
			base->a[i] = 0;
		else
			base->a[i] = ft_atoi(av[n]);
		n++;
		if (n < ac)
			i++;
	}
}

void	stack_fill_q(char **av, t_base *base)
{
	int		n;
	int		i;

	n = 0;
	i = 0;
	while (n < base->start.size)
	{
		if (av[n][0] == '-')
		{
			av[n][0] = '+';
			base->a[i] = ft_atoi(av[n]);
			base->a[i] *= -1;
		}
		else if (av[n][0] == '0')
			base->a[i] = 0;
		else
			base->a[i] = ft_atoi(av[n]);
		n++;
		if (n < base->start.size)
			i++;
	}
}

void	arg_checker(int argc, char **argv, t_base *base)
{
	if (argc > 2)
	{
		base->start.size = argc - 1;
		check_num(argv, argc);
		return ;
	}
	else if (argc == 2)
	{
		check_num_q(argv[1], base);
	}	
}

int	ft_atoi(const char *str)
{
	int neg;
	int i;
	int num;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}
