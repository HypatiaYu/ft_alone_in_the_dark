/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 12:45:54 by hyu               #+#    #+#             */
/*   Updated: 2019/10/31 13:07:49 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
		
			if (argv[1][i] <= 'z' && argv[1][i] >= 'a')
			{
				j = argv[1][i] - 'a';
				while (j >= 0)
				{
					ft_putchar(argv[1][i]);
					j--;
				}
			}
			else if (argv[1][i] <= 'Z' && argv[1][i] >= 'A')
			{
			   j = argv[1][i] - 'A';
			   while (j >= 0)
			   {
				   ft_putchar(argv[1][i]);
				   j--;
			   }
			}
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
