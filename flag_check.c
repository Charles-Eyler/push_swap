/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noah-baz <noah-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 19:44:11 by noah-baz          #+#    #+#             */
/*   Updated: 2026/07/09 09:22:44 by noah-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"


int   ft_count_flags(t_flags *flags)
{
	int count;

	count = 0;
	if (flags->has_bench == true)
		count++;
	if(flags->has_diff == true)
		count++;
	return (count);
}

static bool	ft_right_flags(t_flags *flags, char **argv)
{
	if (ft_count_flags(flags) == 1)
	{
		if(ft_is_bench_flags(argv[1]) || ft_is_diff_flags(argv[1]))
			return (true);
	}
	if (ft_count_flags(flags) == 2)
	{
		if((argv[2] && ft_is_bench_flags(argv[1]) && ft_is_diff_flags(argv[2]))
			|| (ft_is_bench_flags(argv[2]) && ft_is_diff_flags(argv[1])))
			return (true);
	}
	return (false);
}

void	ft_flag_check(t_flags *flags, char **argv)
{
	if (argv[1])
		ft_flag_bench(flags, argv);
	ft_flag_diff(flags, argv[1]);
	if (argv[2])
		ft_flag_diff(flags, argv[2]);
	if (argv[1] && !ft_right_flags(flags, argv))
		ft_give_error();
}
//check for valid flags
// Check for Bench
// Check for difficulty and assign only after checking if following the current
// difficulty flag there are other flags present, if present error