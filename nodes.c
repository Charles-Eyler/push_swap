/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 21:31:36 by noah-baz          #+#    #+#             */
/*   Updated: 2026/07/06 19:21:47 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 


//adds all the numbers inside the array to the tack_a
t_node	ft_array_to_list(char **array)
{
	int i;
	t_node	*stack_a;

	i = 0;
	stack_a = malloc(arr_count(array) * sizeof(long int));
	while(array[i])
	{
		ft_lstadd_back(stack_a, ft_lstnew((void *)ft_atol(array[i])));
		stack_a = stack_a->next;
	}
	return (*stack_a);
}
