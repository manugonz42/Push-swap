/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:02:10 by manugonz          #+#    #+#             */
/*   Updated: 2023/10/20 18:02:13 by manugonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_radix(t_list_m **stack_a, t_list_m **stack_b)
{
	int	bit;
	int	cycles;
	int	size;

	size = ft_lstsize_mod(*stack_a);
	cycles = 0;
	while (size > 1 && ++cycles)
		size /= 2;
	bit = -1;
	while (++bit <= cycles)
	{
		if (ft_check_sorted(*stack_a))
			break ;
		size = ft_lstsize_mod(*stack_a);
		while (size--)
		{
			if (((*stack_a)->pos >> bit) % 2 == 0)
				ft_pb(stack_a, stack_b);
			else
				ft_ra(stack_a);
		}
		while (*stack_b)
			ft_pa (stack_a, stack_b);
	}
}
