/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perform.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:06:51 by letumany          #+#    #+#             */
/*   Updated: 2022/02/04 17:02:54 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	perform_norme(void)
{
	while (s_core.best.ra)
	{
		ra(1);
		--s_core.best.ra;
	}
	while (s_core.best.rb)
	{
		rb(1);
		--s_core.best.rb;
	}
	while (s_core.best.rra)
	{
		rra(1);
		--s_core.best.rra;
	}
	while (s_core.best.rrb)
	{
		rrb(1);
		--s_core.best.rrb;
	}
}

void	perform(void)
{
	perform_norme();
	while (s_core.best.rr)
	{
		rr();
		--s_core.best.rr;
	}
	while (s_core.best.rrr)
	{
		rrr();
		--s_core.best.rrr;
	}
	pa();
}
