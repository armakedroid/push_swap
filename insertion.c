/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argharag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 22:00:55 by argharag          #+#    #+#             */
/*   Updated: 2025/04/07 21:42:57 by argharag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	insertion(int *i, int m)
{
	int	key;
	int	n;
	int	tmp;

	if (!i)
		return (1);
	n = 0;
	while (++n < m)
	{
		key = n - 1;
		tmp = i[n];
		while (key >= 0 && i[key] > tmp)
		{
			i[key + 1] = i[key];
			key--;
		}
		if (key + 1 < m)
			i[key + 1] = tmp;
	}
	n = -1;
	while (++n < m)
		if (i[n] == i[n + 1])
			return (1);
	return (0);
}
