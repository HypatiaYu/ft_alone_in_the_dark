/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 20:52:12 by hyu               #+#    #+#             */
/*   Updated: 2019/11/02 21:03:30 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_capitalize(char c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else if (c <= 'Z' && c >= 'A')
		return (0);
	return (-1);
}

void	alpha_mirror(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (ft_capitalize(str[i]) == 1)
		{
			ft_putchar('z' - (str[i] % 'a'));
		}
		else if (ft_capitalize(str[i]) == 0)
		{
			ft_putchar('Z' - (str[i] % 'A'));
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		alpha_mirror(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
