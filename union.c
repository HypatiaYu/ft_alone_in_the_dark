/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 15:45:39 by hyu               #+#    #+#             */
/*   Updated: 2019/10/31 16:03:48 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check(char a, int *table)
{
	if (table[(int)a] == 0)
	{
		table[(int)a] = 1;
		return (1);
	}
	return (0);
}

void	ft_print(char *str,int *table)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_check(str[i], table) == 1)
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int	table[128] = { 0 };

	i = 0;
	if (argc == 3)
	{
		ft_print(argv[1], table);
		ft_print(argv[2], table);
	}
	ft_putchar('\n');
	return (0);
}
