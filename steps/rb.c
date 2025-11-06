/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argharag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 20:43:59 by argharag          #+#    #+#             */
/*   Updated: 2025/04/06 15:31:52 by argharag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	rb(t_m **stack)
{
	t_m	*node1;
	t_m	*node2;

	if (!(*stack) || !((*stack)->next))
		return ;
	node2 = *stack;
	node1 = *stack;
	while (node2->next)
		node2 = node2->next;
	*stack = node1->next;
	node1->next = NULL;
	node1->prev = node2;
	node2->next = node1;
	(*stack)->prev = NULL;
	write(1, "rb\n", 3);
}
