/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_sp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:01:57 by manugonz          #+#    #+#             */
/*   Updated: 2023/10/20 18:01:58 by manugonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list_m **list)
{
	t_list_m	*aux;

	if (ft_lstsize_mod(*list) > 1)
	{
		aux = (*list)->next->next;
		(*list)->next->next = *list;
		(*list) = (*list)->next;
		(*list)->next->next = aux;
		ft_putendl_fd("sa", STDOUT_FILENO);
	}
}

void	ft_sb(t_list_m **list)
{
	t_list_m	*aux;

	if (ft_lstsize_mod(*list) > 1)
	{
		aux = (*list)->next->next;
		(*list)->next->next = *list;
		(*list) = (*list)->next;
		(*list)->next->next = aux;
		ft_putendl_fd("sb", STDOUT_FILENO);
	}
}

void	ft_ss(t_list_m **stack_a, t_list_m **stack_b)
{
	t_list_m	*aux;

	if (ft_lstsize_mod(*stack_a) > 1)
	{
		aux = (*stack_a)->next->next;
		(*stack_a)->next->next = *stack_a;
		(*stack_a) = (*stack_a)->next;
		(*stack_a)->next->next = aux;
	}
	if (ft_lstsize_mod(*stack_b) > 1)
	{
		aux = (*stack_b)->next->next;
		(*stack_b)->next->next = *stack_b;
		(*stack_b) = (*stack_b)->next;
		(*stack_b)->next->next = aux;
	}
	ft_putendl_fd("ss", STDOUT_FILENO);
}

void	ft_pa(t_list_m **stack_a, t_list_m **stack_b)
{
	t_list_m	*aux;

	if (*stack_b)
	{
		aux = (*stack_b)->next;
		(*stack_b)->next = (*stack_a);
		(*stack_a) = (*stack_b);
		(*stack_b) = aux;
		ft_putendl_fd("pa", STDOUT_FILENO);
	}
}

void	ft_pb(t_list_m **stack_a, t_list_m **stack_b)
{
	t_list_m	*aux;

	if (*stack_a)
	{
		aux = (*stack_a)->next;
		(*stack_a)->next = (*stack_b);
		(*stack_b) = (*stack_a);
		(*stack_a) = aux;
		ft_putendl_fd("pb", STDOUT_FILENO);
	}
}
