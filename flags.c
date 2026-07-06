/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 19:44:11 by noah-baz          #+#    #+#             */
/*   Updated: 2026/07/06 17:58:08 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

void	ft_flag_check(t_flags flags, char **argv)
{
	int i;

	i = 1;
	while(argv[i])
	{
		if(ft_strnstr(argv[i], "--bench", 7))
			flags.bench = true;
		if(ft_strnstr(argv[i], "--simple", 8))
			flags.difficulty = 1;
		if(ft_strnstr(argv[i], "--medium", 6))
			flags.difficulty = 2;
		if(ft_strnstr(argv[i], "--complex", 9))
			flags.difficulty = 4;
		else
			flags.difficulty = 0;
		i++;
	}
}