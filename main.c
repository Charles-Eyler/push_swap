/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 08:11:24 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/07/06 08:26:23 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//----------Main temporaria para visualizacao-----------//

int main(int argc, char **argv)
{
	int i;
	int	count;
	char	**array;
	t_flags flags;

	i = 1;
	if (argc < 2)
		give_error();
	ft_args_check(flags, argv);
	array = ft_transform(argv);
	count = arr_count(array);
	ft_array_to_list(array);

}

//----------Main para array tests---------------------//

/* int main(int ac, char **av)
{
	int i = 0;
	while(av[i])
		printf("arg[%d]> `%s`\n", i, av[i++]);
	
	printf("arg[%d]> `%s`\n", i, av[i++]);
	printf("arg[%d]> `%s`\n", i, av[i+5000000]);

} */