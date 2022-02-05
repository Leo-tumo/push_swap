/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perform.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:06:51 by letumany          #+#    #+#             */
/*   Updated: 2022/02/05 23:39:28 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	perform_norme(t_base *base)
{
	while (base->best.ra)
	{
		ra(1, base);
		--base->best.ra;
	}
	while (base->best.rb)
	{
		rb(1, base);
		--base->best.rb;
	}
	while (base->best.rra)
	{
		rra(1, base);
		--base->best.rra;
	}
	while (base->best.rrb)
	{
		rrb(1, base);
		--base->best.rrb;
	}
}

void	perform(t_base *base)
{
	perform_norme(base);
	while (base->best.rr)
	{
		rr(base);
		--base->best.rr;
	}
	while (base->best.rrr)
	{
		rrr(base);
		--base->best.rrr;
	}
	pa(base);
}
