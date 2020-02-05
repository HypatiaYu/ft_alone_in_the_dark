/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 15:22:51 by hyu               #+#    #+#             */
/*   Updated: 2019/10/29 15:38:33 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int i)
{
	if (i >= 10)
		ft_putnbr(i / 10);
	ft_putchar((i % 10) + '0');
}

int		ft_atoi(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = str[i] + j * 10 - '0';
		i++;
	}
	return (j);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if (argc == 1)
	{
		ft_putchar('\n');
		return (0);
	}
	else if (argc > 1)
	{
		j = ft_atoi(argv[1]);
		while (i < 10)
		{
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putchar('x');
			ft_putchar(' ');
			ft_putnbr(j);
			ft_putchar(' ');
			ft_putchar('=');
			ft_putchar(' ');
			ft_putnbr(j * i);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
