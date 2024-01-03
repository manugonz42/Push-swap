/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:02:34 by manugonz          #+#    #+#             */
/*   Updated: 2023/10/20 18:02:36 by manugonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

//--------t_list_mod-------

typedef struct s_list_m
{
	int				content;
	int				pos;
	struct s_list_m	*next;
}	t_list_m;

//--------macros----------
# define RESET	"\033[0m"
# define BLACK	"\033[30m"
# define RED	  "\033[31m"
# define GREEN	"\033[32m"
# define YELLOW   "\033[33m"
# define BLUE	 "\033[34m"
# define MAGENTA  "\033[35m"
# define CYAN	 "\033[36m"
# define WHITE	"\033[37m"
# define INT_MAX	__INT_MAX__
# define INT_MIN	-2147483648

//--------functions-------
void		ft_error_message(void);
void		ft_init_stack(t_list_m **list, int argc, char **argv);
int			ft_check_num(char *str);
void		ft_check_dupli(t_list_m *list);
void		ft_set_order(t_list_m *list);
void		ft_find_min(t_list_m *list, int pos);
int			ft_check_sorted(t_list_m *list);
int			ft_max_num(t_list_m *list);
int			ft_min_num(t_list_m *list);
int			ft_min_num_pos(t_list_m *lst);
void		ft_print_stack(t_list_m *stack_a);
void		ft_free_matrix(char **m, int j, t_list_m **lst);
void		ft_check_int_size(char *str, char **split, t_list_m **list, int j);

//--------moving-funt-----
void		ft_sa(t_list_m **list);
void		ft_sb(t_list_m **list);
void		ft_ss(t_list_m **stack_a, t_list_m **stack_b);
void		ft_pa(t_list_m **stack_a, t_list_m **stack_b);
void		ft_pb(t_list_m **stack_a, t_list_m **stack_b);
void		ft_ra(t_list_m **list);
void		ft_rb(t_list_m **list);
void		ft_rr(t_list_m **stack_a, t_list_m **stack_b);
void		ft_rra(t_list_m **list);
void		ft_rrb(t_list_m **list);
void		ft_rrr(t_list_m **stack_a, t_list_m **stack_b);

//--------list-funct-mod--
t_list_m	*ft_lstnew_mod(int n);
t_list_m	*ft_lstlast_mod(t_list_m *lst);
void		ft_lstadd_back_mod(t_list_m **lst, t_list_m *new);
void		ft_lstclear_mod(t_list_m **lst);
void		ft_lstdelone_mod(t_list_m *lst);
int			ft_lstsize_mod(t_list_m *lst);

//--------order_funct-----
void		ft_3(t_list_m **stack_a);
void		ft_5(t_list_m **stack_a, t_list_m **stack_b);
void		ft_radix(t_list_m **stack_a, t_list_m **stack_b);

#endif
