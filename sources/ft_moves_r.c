/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_r.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:01:37 by manugonz          #+#    #+#             */
/*   Updated: 2023/10/20 18:01:39 by manugonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_list_m **list)
{
	t_list_m	*aux;

	if (ft_lstsize_mod (*list) > 1)
	{
		aux = (*list)->next;
		ft_lstlast_mod(*list)->next = (*list);
		(*list)->next = NULL;
		(*list) = aux;
		ft_putendl_fd("ra", STDOUT_FILENO);
	}
}

void	ft_rb(t_list_m **list)
{
	t_list_m	*aux;

	if (ft_lstsize_mod(*list) > 1)
	{
		aux = (*list)->next;
		ft_lstlast_mod(*list)->next = (*list);
		(*list)->next = NULL;
		(*list) = aux;
		ft_putendl_fd("ra", STDOUT_FILENO);
	}
}

void	ft_rr(t_list_m **stack_a, t_list_m **stack_b)
{
	t_list_m	*aux;

	if (ft_lstsize_mod(*stack_a) > 1)
	{
		aux = (*stack_a)->next;
		ft_lstlast_mod(*stack_a)->next = (*stack_a);
		(*stack_a)->next = NULL;
		(*stack_a) = aux;
		ft_putendl_fd("ra", STDOUT_FILENO);
	}
	if (ft_lstsize_mod(*stack_b) > 1)
	{
		aux = (*stack_b)->next;
		ft_lstlast_mod(*stack_b)->next = (*stack_b);
		(*stack_b)->next = NULL;
		(*stack_b) = aux;
		ft_putendl_fd("ra", STDOUT_FILENO);
	}
	ft_putendl_fd("rr", STDOUT_FILENO);
}
