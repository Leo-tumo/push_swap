/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perform.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:06:51 by letumany          #+#    #+#             */
/*   Updated: 2022/01/31 22:51:22 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	perform(int *A, int *B)
{
	while(s_core.best.ra)
		ra(A, s_core.c_a);
	while(s_core.best.rb)
		rb(A, s_core.c_b);	
	while(s_core.best.rra)
		rra(A, s_core.c_a);
	while(s_core.best.rrb)
		rrb(A, s_core.c_b);
	while(s_core.best.rr)
		rr(A, B, s_core.c_a, s_core.c_b);
	while(s_core.best.rrr)
		rrr(A, B, s_core.c_a, s_core.c_b);
	pa(A, B, s_core.c_a, s_core.c_b);
}
