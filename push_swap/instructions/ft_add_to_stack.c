/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_to_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:25:30 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/10 17:25:32 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "instruction.h"

t_stack	*ft_add_to_stack_back(t_stack *stack, int data)
{
	t_stack	*node;
	t_stack	*stack_clone;

	node = ft_new_node(data);
	if (stack == NULL)
		return (node);
	stack_clone = stack;
	while (stack_clone->next != NULL)
		stack_clone = stack_clone->next;
	stack_clone->next = node;
	node->previous = stack_clone;
	node->pos = 0;
	return (stack);
}

t_stack	*ft_add_to_stack_back_pos(t_stack *stack, int data, int pos)
{
	t_stack	*node;
	t_stack	*stack_clone;

	node = ft_new_node(data);
	if (stack == NULL)
		return (node);
	stack_clone = stack;
	while (stack_clone->next != NULL)
		stack_clone = stack_clone->next;
	stack_clone->next = node;
	node->previous = stack_clone;
	node->pos = pos;
	return (stack);
}
