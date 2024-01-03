/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3_and_5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:59:57 by manugonz          #+#    #+#             */
/*   Updated: 2023/10/20 17:59:59 by manugonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_3(t_list_m **stack_a)
{
	int	min;	
	int	max;

	min = ft_min_num(*stack_a);
	max = ft_max_num(*stack_a);
	if ((*stack_a)->next->content == min && (*stack_a)->content != max)
		ft_sa(stack_a);
	else if ((*stack_a)->content == max && (*stack_a)->next->content != min)
	{
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	else if ((*stack_a)->content == max && (*stack_a)->next->content == min)
		ft_ra(stack_a);
	else if ((*stack_a)->content == min && (*stack_a)->next->content == max)
	{
		ft_sa(stack_a);
		ft_ra(stack_a);
	}
	else if ((*stack_a)->next->content == max && (*stack_a)->pos != min)
		ft_rra(stack_a);
}

void	ft_5(t_list_m **stack_a, t_list_m **stack_b)
{
	int	pos;

	while (ft_lstsize_mod(*stack_a) > 3)
	{
		pos = ft_min_num_pos(*stack_a);
		if (pos == 1)
			ft_pb(stack_a, stack_b);
		else if (pos > (ft_lstsize_mod(*stack_a) / 2))
			ft_rra(stack_a);
		else
			ft_ra(stack_a);
	}
	ft_3 (stack_a);
	while (ft_lstsize_mod(*stack_b))
		ft_pa(stack_a, stack_b);
}
