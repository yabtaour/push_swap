/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:48:10 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/11 14:48:12 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "instruction.h"

void	print_pa(t_stack **stack_b, t_stack **stack_a)
{
	ft_putstr("pa\n");
	ft_pa(stack_b, stack_a);
}

void	ft_pa(t_stack **stack_b, t_stack **stack_a)
{
	t_stack	*stack_clone_b;

	if (stack_b != NULL)
	{
		stack_clone_b = *stack_b;
		if (stack_clone_b->next == NULL)
			*stack_b = NULL;
		else
			*stack_b = stack_clone_b->next;
		ft_add_stack_front(stack_a, stack_clone_b);
	}
}
