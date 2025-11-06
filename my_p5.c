/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_p5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argharag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 19:02:23 by argharag          #+#    #+#             */
/*   Updated: 2025/04/12 19:02:24 by argharag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print5(t_m **a, t_m *b, t_m **bb)
{
	int	count;

	count = 0;
	b = *a;
	while (b->index != 4)
	{
		b = b->next;
		count++;
	}
	b = *a;
	if (count > 2)
		while (++count != 6)
			rra(a);
	else
		while (--count != -1)
			ra(a);
	pb(bb, a);
	if (!sorted(*a))
		print4(a, (*a)->next->next->next, bb);
	pa(a, bb);
	ra(a);
}
