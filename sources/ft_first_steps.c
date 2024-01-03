/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_steps.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:00:52 by manugonz          #+#    #+#             */
/*   Updated: 2023/10/20 18:00:53 by manugonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_int_size(char *str, char **split, t_list_m **list, int j)
{
	int			cont;
	long int	neg;
	long int	res;

	res = 0;
	cont = 0;
	while ((str[cont] > 8 && str[cont] < 14) || str[cont] == 32)
		cont++;
	if (str[cont] == 45)
		neg = -1;
	else
		neg = 1;
	if (str[cont] == '+' || str[cont] == '-')
		cont++;
	while (str[cont] >= '0' && str[cont] <= '9')
	{
		res = (res * 10) + (str[cont] - 48);
		cont++;
	}
	if (res * neg > INT_MAX || res * neg < INT_MIN)
		ft_free_matrix(split, j, list);
}

void	ft_set_order(t_list_m *list)
{
	int			pos;
	int			len;
	int			cont;
	t_list_m	*aux;

	aux = list;
	len = ft_lstsize_mod(list);
	pos = 1;
	cont = 0;
	while (++cont <= len)
	{
		ft_find_min(aux, pos);
		pos++;
		list = list->next;
	}
}

void	ft_find_min(t_list_m *list, int pos)
{
	int			buf;
	t_list_m	*aux;

	aux = list;
	while (aux->pos != -1 && aux)
		aux = aux->next;
	buf = aux->content;
	while (aux)
	{
		if (aux->content < buf && aux->pos == -1)
			buf = aux->content;
		aux = aux->next;
	}
	aux = list;
	while (aux)
	{
		if (aux->content == buf)
		{
			aux->pos = pos;
		}
		aux = aux->next;
	}
}

int	ft_check_num(char *str)
{
	int	j;

	j = 0;
	if (((str[j] == '+' || str[j] == '-') \
	&& ft_strlen(str) > 1) || ft_isdigit(str[j]))
	{
		while (str[++j])
		{
			if (!ft_isdigit(str[j]))
				return (0);
		}
		return (1);
	}
	else
		return (0);
}

void	ft_init_stack(t_list_m **list, int argc, char **argv)
{
	int		i;
	int		j;
	char	**str;

	i = 1;
	while (i < argc)
	{
		str = ft_split(argv[i], ' ');
		j = -1;
		while (str[++j])
		{
			if (ft_check_num(str[j]))
			{
				ft_check_int_size(str[j], str, list, j);
				ft_lstadd_back_mod(list, ft_lstnew_mod(ft_atoi(str[j])));
				free(str[j]);
			}
			else
				ft_free_matrix(str, j, list);
		}
		free(str);
		i++;
	}
}
