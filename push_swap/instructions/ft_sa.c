/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:49:36 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/11 14:49:37 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "instruction.h"

void    ft_sa(t_stack **stack_a)
{
    t_stack *stack_a_clone;
    int     data_temp;

    stack_a_clone = *stack_a;
    if (stack_a != NULL)
    {
        if (stack_a_clone->next != NULL)
        {
            data_temp = stack_a_clone->data;
            stack_a_clone->data = stack_a_clone->next->data;
            stack_a_clone->next->data = data_temp;
        }
    }
}