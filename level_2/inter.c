/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:34:43 by hyu               #+#    #+#             */
/*   Updated: 2019/10/28 13:10:46 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_search(char c, char *str1, int j)
{
	int		i;

	i = 0;
	
	if (j != -1)
	{
		while (str1[i] && (i < j))
		{
			if (str1[i] == c)
				return (1);
			i++;
		}
	}
	if (j == -1)
	{
		while (str1[i])
		{
			if (str1[i] == c)
				return (1);
			i++;
		}
	}
	return (0);
}

void	ft_inter(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i])
	{
		if (ft_search(str1[i], str2, -1) == 1 && ft_search(str1[i], str1, i) == 0)
			ft_putchar(str1[i]);		
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_inter(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return (0);
}
