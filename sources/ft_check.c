/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:00:28 by manugonz          #+#    #+#             */
/*   Updated: 2023/10/20 18:00:30 by manugonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_sorted(t_list_m *list)
{
	int	buf;
	int	ret;

	ret = 1;
	if (!list)
		return (1);
	while (list->next)
	{
		buf = list->content;
		if (buf > list->next->content)
			ret = 0;
		list = list->next;
	}
	return (ret);
}

int	ft_max_num(t_list_m *list)
{
	int	max;

	max = list->content;
	while (list->next)
	{
		if (list->next->content > max)
			max = list->next->content;
		list = list->next;
	}
	return (max);
}

int	ft_min_num(t_list_m *list)
{
	int	min;

	min = list->content;
	while (list->next)
	{
		if (list->next->content < min)
			min = list->next->content;
		list = list->next;
	}
	return (min);
}

int	ft_min_num_pos(t_list_m *lst)
{
	int	min;
	int	res;

	res = 1;
	min = ft_min_num (lst);
	while (lst)
	{
		if (lst->content == min)
			return (res);
		res++;
		lst = lst->next;
	}
	return (res);
}

void	ft_check_dupli(t_list_m *list)
{
	t_list_m	*buf;
	t_list_m	*save;

	save = list;
	while (list)
	{
		buf = list->next;
		while (buf)
		{
			if (buf->content == list->content)
			{
				ft_lstclear_mod(&save);
				ft_error_message();
			}
			buf = buf->next;
		}
		list = list->next;
	}
}
