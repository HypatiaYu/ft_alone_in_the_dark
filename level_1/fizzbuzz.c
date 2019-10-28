/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 15:57:36 by hyu               #+#    #+#             */
/*   Updated: 2019/10/28 16:08:13 by hyu              ###   ########.fr       */
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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(void)
{
	int	i;
	int j;

	i = 1;
	while (i <= 100)
	{
		j = 0;
		if (i % 3 == 0)
		{
			ft_putstr("fizz");
			j = 1;
		}
		if (i % 5 == 0)
		{
			ft_putstr("buzz");
			j = 1;
		}
		if (j == 0)
			ft_putnbr(i);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
