/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_rr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:01:46 by manugonz          #+#    #+#             */
/*   Updated: 2023/10/20 18:01:48 by manugonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_list_m **list)
{
	t_list_m	*first;
	t_list_m	*last;

	if (ft_lstsize_mod(*list) > 1)
	{
		first = (*list);
		last = ft_lstlast_mod(*list);
		while (first)
		{
			if (first->next->next == NULL)
				break ;
			first = first->next;
		}
		last->next = (*list);
		first->next = NULL;
		(*list) = last;
	}
}

void	ft_rra(t_list_m **stack_a)
{
	ft_rotate (stack_a);
	ft_putendl_fd("rra", STDOUT_FILENO);
}

void	ft_rrb(t_list_m **stack_b)
{
	ft_rotate (stack_b);
	ft_putendl_fd("rrb", STDOUT_FILENO);
}

void	ft_rrr(t_list_m **stack_a, t_list_m **stack_b)
{
	ft_rotate (stack_a);
	ft_rotate (stack_b);
	ft_putendl_fd("rrr", STDOUT_FILENO);
}
