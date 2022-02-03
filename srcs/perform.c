/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perform.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <letumany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:06:51 by letumany          #+#    #+#             */
/*   Updated: 2022/02/03 17:55:04 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	perform(void)
{
	while(s_core.best.ra)
		ra();
	while(s_core.best.rb)
		rb();	
	while(s_core.best.rra)
		rra();
	while(s_core.best.rrb)
		rrb();
	while(s_core.best.rr)
		rr();
	while(s_core.best.rrr)
		rrr();
	pa();
}
