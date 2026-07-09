/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_bench.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noah-baz <noah-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 08:52:33 by noah-baz          #+#    #+#             */
/*   Updated: 2026/07/09 09:12:56 by noah-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_flag_bench(t_flags *flags, char **argv)
{
	if(argv[1] && !ft_strcmp(argv[1], "--bench"))
		flags->has_bench = true;
	if(argv[2] && !ft_strcmp(argv[2], "--bench"))
	{
		if (flags->has_bench)
			ft_give_error();
		flags->has_bench = true;
	}
}

bool	ft_is_bench_flags(char *flag)
{
	if(!ft_strcmp(flag, "--bench"))
		return (true);
	return (false);
}