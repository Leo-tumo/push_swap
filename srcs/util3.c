/* ************************************************************************************ */
/*                                                                                      */
/*                                                    :::        :::::::::: ::::::::    */
/*   linked_list.c                                   :+:        :+:       :+:    :+:    */
/*                                                  +:+        +:+       +:+    +:+     */
/*   By: letumany    <leo.tumanyan@gmail.com>      +#+        +#++:++#  +#+    +:+      */
/*                                                +#+        +#+       +#+    +#+       */
/*   Created: 2021/11/15 15:32:29 by letumany    #+#        #+#       #+#    #+#        */
/*   Updated: 2021/11/15 16:11:06 by letumany   ########## ########## ########          */
/*                                                                                      */
/* ************************************************************************************ */

#include "../includes/push_swap.h"

void	rrr(void)
{
	rra();
	rrb();
	write(1, "rrr\n", 4);
}

int		pivot(int *A, int size)
{
	int		i;
	int		pivot;

	i = 0;
	pivot = find_min(A, size);
	while(i < size)
	{
		if(A[i] > pivot)
			A[i] = A[i] - pivot;
		i++;
	}
	return (pivot);
}  