/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_100.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:04:21 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/22 08:04:22 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_compare_top_tail(t_stack **stack, int pos)
{
	int	top;
	int	tail;

	top = ft_find_po(stack, pos);
	tail = ft_stack_size(stack) - top;
	if (top >= tail)
		return (tail);
	else
		return (top);
}

void	ft_push_chunk2(t_stack **stack_a, t_stack **stack_b, int end, int chunk)
{
	int	count;

	count = 0;
	while (*stack_a && count < chunk)
	{
		if ((*stack_a)->pos < end)
		{
			print_pb(stack_a, stack_b);
			if ((*stack_b)->pos > end - (chunk / 2))
			{
				if (*stack_a && (*stack_a)->pos >= end)
					print_rr(stack_a, stack_b);
				else
					print_rb(stack_b);
			}
			count++;
			continue ;
		}
		print_ra(stack_a);
	}
}

void	take_to_top(t_stack **stack, int pos)
{
	while ((*stack)->pos != pos)
	{
		if ((ft_find_po(stack, pos)) >= (ft_stack_size(stack) / 2))
			print_rrb(stack);
		else
			print_rb(stack);
	}
}

void	ft_push_chunks(t_stack **stack_a, t_stack **stack_b, int size)
{
	int	end;

	end = 0;
	while (*stack_a)
	{
		end += size;
		ft_push_chunk2(stack_a, stack_b, end, size);
	}
}

void	ft_sort_100(t_stack **stack_a, t_stack **stack_b, int div)
{
	int		size;
	int		ssize;

	ssize = ft_stack_size(stack_a) - 1;
	size = ft_stack_size(stack_a) / div;
	ft_push_chunks(stack_a, stack_b, size);
	while (*stack_b && ssize >= 0)
	{
		if (ssize == 0 || ft_compare_top_tail(stack_b, ssize)
			< ft_compare_top_tail(stack_b, ssize - 1))
		{
			take_to_top(stack_b, ssize--);
			print_pa(stack_b, stack_a);
		}
		else
		{
			take_to_top(stack_b, ssize - 1);
			print_pa(stack_b, stack_a);
			take_to_top(stack_b, ssize);
			print_pa(stack_b, stack_a);
			print_sa(stack_a);
			ssize -= 2;
		}
	}
}
