/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:01:08 by manugonz          #+#    #+#             */
/*   Updated: 2023/10/20 18:01:09 by manugonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_m	*ft_lstnew_mod(int n)
{
	t_list_m	*list;

	list = malloc(sizeof(t_list_m));
	if (!list)
		ft_error_message();
	list->content = n;
	list->pos = -1;
	list->next = NULL;
	return (list);
}

void	ft_lstadd_back_mod(t_list_m **lst, t_list_m *new)
{
	t_list_m	*res;

	if (!*lst)
		*lst = new;
	else
	{
		if (!new)
			return ;
		res = ft_lstlast_mod(*lst);
		res->next = new;
	}
}

t_list_m	*ft_lstlast_mod(t_list_m *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

void	ft_lstclear_mod(t_list_m **lst)
{
	t_list_m	*b;

	if (!lst)
		return ;
	while (*lst)
	{
		b = (*lst)->next;
		free(*lst);
		*lst = b;
	}
	*lst = NULL;
}

int	ft_lstsize_mod(t_list_m *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
