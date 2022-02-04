/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:25:48 by letumany          #+#    #+#             */
/*   Updated: 2022/02/04 17:16:33 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rrr(void)
{
	rra(0);
	rrb(0);
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

void	score_init(void)
{
	s_core.current.ra = 0;
	s_core.current.rb = 0;
	s_core.current.rra = 0;
	s_core.current.rrb = 0;
	s_core.current.rr = 0;
	s_core.current.rrr = 0;
	s_core.current.score = 0;
}

void	markup_norme(int *i, int *index, int *tmp)
{
	while (*i >= 0)
	{
		if (*tmp == 0)
		{
			if (s_core.a[*i] == 0)
				s_core.a[*i] = *index;
		}
		if (s_core.a[*i] == *tmp)
		{
			s_core.a[*i] = *index;
			break ;
		}
		--(*i);
	}
}
