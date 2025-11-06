/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argharag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 20:42:54 by argharag          #+#    #+#             */
/*   Updated: 2025/04/06 15:52:04 by argharag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	rrb(t_m **stack)
{
	t_m	*node1;
	t_m	*node2;

	if (!(*stack) || !((*stack)->next))
		return ;
	node2 = *stack;
	node1 = *stack;
	while (node2->next)
		node2 = node2->next;
	node2->prev->next = NULL;
	node2->prev = NULL;
	node2->next = node1;
	*stack = node2;
	node1->prev = *stack;
	write(1, "rrb\n", 4);
}
