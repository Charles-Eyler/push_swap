/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 19:26:22 by noah-baz          #+#    #+#             */
/*   Updated: 2026/07/06 19:20:36 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 


void give_error(void)
{
    write(2, "Error\n", 6);
    exit(1);
}

void free_array(char **array)
{
    int i;
    
    i = 0;
    while(array[i])
    {
        free(array[i]);
        i++;
    }
    free(array);
    return ;
}

//---------------unfinished function--------//

void free_list(t_node *node)
{
    if(!node)
        return;
    while(node->prev)
	{
		free()
	}
    
}

void	ft_del_it(void *content)
{
	
}