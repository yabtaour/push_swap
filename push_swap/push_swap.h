/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:56:16 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/10 14:56:18 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./instructions/instruction.h"

char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, int start, size_t len);
void	*ft_calloc(int count, int size);
int     ft_strlen(char *str);
char	**ft_split(char *s, char c);
void	ft_create_stack(t_stack **stack_a, char **arguments);
t_stack *ft_new_node(int data);
t_stack	*ft_add_to_stack_back(t_stack *stack, int data);
int     ft_check_imposter(char *args);
int     ft_check_sort(t_stack *stack);
void    ft_sort(t_stack **stack_a);
void    ft_sort_3nums(t_stack **stack_a);
void	ft_sort_2nums(t_stack **stack_a);

#endif