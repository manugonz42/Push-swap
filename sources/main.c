/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:02:22 by manugonz          #+#    #+#             */
/*   Updated: 2023/10/20 18:02:23 by manugonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_list_m *stack_a)
{
	while (stack_a)
	{
		ft_putstr_fd(GREEN "# num =" RESET " ", STDOUT_FILENO);
		ft_putnbr_fd(stack_a->content, STDOUT_FILENO);
		ft_putstr_fd(GREEN "	pos =" RESET " ", STDOUT_FILENO);
		ft_putnbr_fd(stack_a->pos, STDOUT_FILENO);
		ft_putstr_fd("\n", STDOUT_FILENO);
		stack_a = stack_a->next;
	}
	ft_putstr_fd("\n", STDOUT_FILENO);
}

void	ft_sort(t_list_m **stack_a, t_list_m **stack_b)
{
	if (ft_lstsize_mod(*stack_a) == 2)
		ft_sa(stack_a);
	else if (ft_lstsize_mod(*stack_a) == 3)
		ft_3(stack_a);
	else if (ft_lstsize_mod(*stack_a) <= 5)
		ft_5(stack_a, stack_b);
	else
		ft_radix(stack_a, stack_b);
}

int	main(int argc, char *argv[])
{
	t_list_m	*stack_a;
	t_list_m	*stack_b;

	stack_a = 0;
	stack_b = 0;
	ft_init_stack(&stack_a, argc, argv);
	ft_check_dupli(stack_a);
	if (ft_check_sorted(stack_a))
	{
		ft_lstclear_mod(&stack_a);
		return (0);
	}
	ft_set_order(stack_a);
	ft_sort(&stack_a, &stack_b);
	ft_lstclear_mod(&stack_a);
	return (0);
}
