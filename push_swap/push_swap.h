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

# define BUFFER_SIZE 1

char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, int start, size_t len);
void	*ft_calloc(int count, int size);
int		ft_strlen(char *str);
char	**ft_split(char *s, char c);
void	ft_create_stack(t_stack **stack_a, char **arguments);
int		ft_check_imposter(char *args);
int		ft_check_sort(t_stack *stack);
void	ft_sort(t_stack **stack_a);
void	ft_sort_3nums(t_stack **stack_a);
void	ft_sort_2nums(t_stack **stack_a);
void	ft_sort_5nums(t_stack **stack_a, t_stack **stack_b, int i);
void	ft_sort_100(t_stack **stack_a, t_stack **stack_b, int div);
int		ft_stack_size(t_stack	**stack_a);
int		ft_find_position(t_stack **stack_a, int number);
int		ft_find_po(t_stack **stack, int pos);
void	free_split(char **arguments);
char	*ft_join_args(char *argv[], int argc);
int		ft_check_int(char **arguments);
long	ft_atoi(const char *str);
char	*get_next_line(int fd);
char	*ft_strchr(char *str, int c);
int		ft_check_not_number(char *args);
int		ft_check_double(t_stack **stack_a);
int		ft_check_sorted(t_stack **stack_a);
void	ft_free(t_stack **stack_a);
int		ft_strcmp(char	*s1, char	*s2);
void	ft_instruction_error(t_stack **stack_a, t_stack **stack_b, char *in);

#endif