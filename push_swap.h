/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noah-baz <noah-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 18:57:38 by noah-baz          #+#    #+#             */
/*   Updated: 2026/07/09 09:19:55 by noah-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft_pushswap/libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

//--------------------------//
//--------Structs-----------//
//--------------------------//

typedef struct operations
{
    char    *sa;
    char    *sb;
    char    *ss;
    char    *pa;
    char    *pb;
    char    *ra;
    char    *rb;
    char    *rr;
    char    *rra;
    char    *rrb;
    char    *rrr;
}               op;

typedef enum e_flags
{
	DIFF_ADAPTIVE,
	DIFF_SIMPLE,
	DIFF_MEDIUM,
	DIFF_COMPLEX
    
}	t_diff;

typedef struct s_flags
{
	bool    has_bench;
	bool	has_diff;
	t_diff difficulty;
}	t_flags;


//--------------------------//
//--------Operations--------//
//--------------------------//

void    ft_sstack(t_node *stack);
void    ft_ss(t_node *stack_a, t_node *stack_b);
void    ft_pstack(t_node *stack_1, t_node *stack_2);
void    ft_rstack(t_node *stack);
void    ft_rr(t_node *stack_a, t_node *stack_b);
void    ft_rrstack(t_node *stack);
void    ft_rrr(t_node *stack_a, t_node *stack_b);

//--------------------------//
//--------Parsing-----------//
//--------------------------//

void	ft_args_check(char **argv);
char **ft_separate_and_validate(char **argv);
void	ft_valid_array(char *array);
int		ft_dup_check(char **array, int size);
int		arr_count(char **array);

//--------------------------//
//-------Parsing_utils------//
//--------------------------//

int		ft_isoperator(char c);
int		ft_isspace(char c);
long int	ft_atol(char *array);
char	**ft_split_whitespace(char const *s);
int	ft_strcmp(const char *s1, const char *s2);


//--------------------------//
//----------Flags-----------//
//--------------------------//

void	ft_flag_check(t_flags *flags, char **argv);
void 	ft_flag_diff(t_flags *flags, char *arg);
bool	ft_is_diff_flags(char *flag);
void	ft_flag_bench(t_flags *flags, char **argv);
bool	ft_is_bench_flags(char *flag);
int   ft_count_flags(t_flags *flags);

//--------------------------//
//----------Error-----------//
//--------------------------//

void    ft_give_error(void);
void    ft_free_array(char **array);
//void    free_list(t_node *node);

//--------------------------//
//----------Lists-----------//
//--------------------------//

t_node	**ft_array_to_list(char **array);
//void	ft_del_it(void *content);

#endif