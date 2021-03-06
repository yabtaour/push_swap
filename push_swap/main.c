/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:45:43 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/10 14:45:47 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_count_args(int argc)
{
	if (argc <= 1)
		exit (0);
}

int	main(int argc, char *argv[])
{
	char	**arguments;
	char	*args;
	t_stack	*stack_a;

	stack_a = NULL;
	ft_count_args(argc);
	args = ft_join_args(argv, argc);
	if (!ft_check_not_number(args))
		return (0);
	arguments = ft_split(args, ' ');
	if (!ft_check_int(arguments))
		return (0);
	free(args);
	ft_create_stack(&stack_a, arguments);
	free_split(arguments);
	if (!ft_check_double(&stack_a) || !ft_check_sorted(&stack_a))
		return (0);
	ft_sort(&stack_a);
	ft_free(&stack_a);
	return (0);
}
