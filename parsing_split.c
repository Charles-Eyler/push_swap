/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 08:21:47 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/07/06 08:50:44 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h" 

static size_t	ft_arg_count(const char *s)
{
	size_t	words;
	size_t	i;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (ft_isspace(s[i]) == 1)
			i++;
		if (s[i] && ft_isspace(s[i]) == 0)
			words++;
		while (s[i] && ft_isspace(s[i]) == 0)
			i++;
	}
	return (words);
}

static void	ft_free_them(char **ar_ar, int size)
{
	if (!ar_ar)
		return ;
	while (size > 0)
	{
		size--;
		free(ar_ar[size]);
	}
	free(ar_ar);
}

static void	the_lett_aloc(const char *s, char **ar_ar, int size)
{
	size_t	start;
	size_t	len;
	size_t	i;

	i = 0;
	while (s[i])
	{
		len = 0;
		while (ft_isspace(s[i]) == 1)
			i++;
		if (s[i] && ft_isspace(s[i]) == 0)
		{
			start = i;
			while (s[i] && ft_isspace(s[i]) == 1)
			{
				len++;
				i++;
			}
			ar_ar[size] = ft_substr(s, start, len);
			if (!ar_ar[size])
				return (ft_free_them(ar_ar, size));
			size++;
		}
	}
	ar_ar[size] = NULL;
}

char	**ft_split(char const *s)
{
	char	**ar_ar;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_arg_count(s);
	ar_ar = malloc(sizeof(char *) * (words + 1));
	if (!ar_ar)
		return (NULL);
	if (words == 0)
	{
		ar_ar[0] = NULL;
		return (ar_ar);
	}
	the_lett_aloc(s, ar_ar, 0);
	if (!ar_ar)
		return (NULL);
	return (ar_ar);
}