/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_diff.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noah-baz <noah-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 08:50:36 by noah-baz          #+#    #+#             */
/*   Updated: 2026/07/09 09:08:23 by noah-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


static void	ft_activate_diff(t_flags *flags, t_diff diff)
{
	flags->difficulty = diff;
	if(flags->has_diff == true)
		ft_give_error();
	flags->has_diff = true;
}

void ft_flag_diff(t_flags *flags, char *arg)
{
	if(!ft_strcmp(arg, "--simple"))
		ft_activate_diff(flags, DIFF_SIMPLE);
	if(!ft_strcmp(arg, "--medium"))
		ft_activate_diff(flags, DIFF_MEDIUM);
	if(!ft_strcmp(arg, "--complex"))
		ft_activate_diff(flags, DIFF_COMPLEX);
	if(!ft_strcmp(arg, "--adaptive"))
		ft_activate_diff(flags, DIFF_ADAPTIVE);
}

bool	ft_is_diff_flags(char *flag)
{
	if(!ft_strcmp(flag, "--simple"))
		return (true);
	else if(!ft_strcmp(flag, "--medium"))
		return (true);
	else if(!ft_strcmp(flag, "--complex"))
		return (true);
	else if(!ft_strcmp(flag, "--adaptive"))
		return (true);
	return (false);
}