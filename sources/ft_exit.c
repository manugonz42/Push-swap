/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:00:39 by manugonz          #+#    #+#             */
/*   Updated: 2023/10/20 18:00:41 by manugonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_message(void)
{
	ft_putstr_fd("Error\n", STDERR_FILENO);
	exit(EXIT_FAILURE);
}

void	ft_free_matrix(char **m, int j, t_list_m **lst)
{
	int	i;

	i = j -1;
	while (m[++i])
		free(m[i]);
	free(m);
	ft_lstclear_mod(lst);
	ft_error_message();
}
