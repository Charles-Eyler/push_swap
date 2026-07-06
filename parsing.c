/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 18:57:26 by noah-baz          #+#    #+#             */
/*   Updated: 2026/07/06 19:25:38 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

//counts how many arrays are in the
int	arr_count(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

void	ft_valid_array(char *array)
{
	int i;
	i = 0;
	while(array[i])
	{
		if(ft_isoperator(array[i]) == 1)
		{
			if(!ft_isdigit(array[i + 1]))
			{
				free_array(&array);
				give_error();
			}
		}
		if(!ft_isspace(array[i]) || (!ft_isdigit(array[i])))
		{
		free_array(&array);
		give_error();
		}
		i++;
	}
}

int	ft_dup_check(char **array, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if ( i != j && ft_strcmp(array[i], array[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

char **ft_separate_and_validate(char **argv)
{
	int i;
	int j;
	char **array;

	i = 1;
	j = 0;
	while(argv[i])
	{
		array[j] = *ft_split_whitespace(argv[i]);
		ft_valid_array(array[j]);
		i++;
		j++;
	}
	i = arr_count(array);
	ft_dup_check(array, i);
	return (array);
}

void	ft_args_check(t_flags flags, char **argv)
{
	int i;
	int j;

	i = 1;
	while(argv[i])
	{
		j = 0;
		if(ft_isspace(*argv[i]) == 1)
			j++;
		if (ft_strnstr(argv[i], "--", 2))
			ft_flag_check(flags, argv);
		i++;
		while(argv[i][j])
		{
			if(ft_isoperator(argv[i][j]) == 1)
			{
				j++;
				if(!ft_isdigit(argv[i][j]))
					give_error();	
			}
			if(!ft_isspace(argv[i][j]) || (ft_isdigit(argv[i][j])))
				give_error();
			j++;
		}
	}
}

