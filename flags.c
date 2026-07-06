/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 19:44:11 by noah-baz          #+#    #+#             */
/*   Updated: 2026/07/06 08:49:52 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h" 

void	ft_flag_check(t_flags flags, char **argv)
{
	int i;

	i = 1;
	while(argv[i])
	{
		if(ft_strnstr(argv[i], "--bench"))
			flags.bench = true;
		if(ft_strnstr(argv[i], "--simple"))
			flags.difficulty = 1;
		if(ft_strnstr(argv[i], "--medium"))
			flags.difficulty = 2;
		if(ft_strnstr(argv[i], "--complex"))
			flags.difficulty = 4;
		else
			flags.difficulty = 0;
		i++;
	}
}