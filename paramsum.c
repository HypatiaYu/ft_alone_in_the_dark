/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 13:50:32 by hyu               #+#    #+#             */
/*   Updated: 2019/11/01 13:55:41 by hyu              ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	(void)argv;

	ft_putnbr(argc - 1);
	ft_putchar('\n');
	return (0);
}
