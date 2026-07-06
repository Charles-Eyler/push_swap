/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 21:31:36 by noah-baz          #+#    #+#             */
/*   Updated: 2026/07/06 08:47:17 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h" 


//--------Unfinished function---------//

t_list	ft_array_to_list(char **array)
{
	int i;
	t_list	*node;

	i = 0;
	node = malloc(arr_count(array) * sizeof(long int));
	while(array[i])
	{
		lst_add_node(node,lst_new_node(atol(array[i])))
		i++;
	}
}
