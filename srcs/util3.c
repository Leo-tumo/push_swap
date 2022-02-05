/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:25:48 by letumany          #+#    #+#             */
/*   Updated: 2022/02/05 23:36:10 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rrr(t_base *base)
{
	rra(0, base);
	rrb(0, base);
	write(1, "rrr\n", 4);
}

int	is_digit(int c)
{
	if ((c >= '0' && c <= '9') || c == ' ' || c == '-')
		return (0);
	return (1);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	score_init(t_base *base)
{
	base->current.ra = 0;
	base->current.rb = 0;
	base->current.rra = 0;
	base->current.rrb = 0;
	base->current.rr = 0;
	base->current.rrr = 0;
	base->current.score = 0;
}

void	markup_norme(int *i, int *index, int *tmp, t_base *base)
{
	while (*i >= 0)
	{
		if (*tmp == 0)
		{
			if (base->a[*i] == 0)
				base->a[*i] = *index;
		}
		if (base->a[*i] == *tmp)
		{
			base->a[*i] = *index;
			break ;
		}
		--(*i);
	}
}
