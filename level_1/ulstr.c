/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:21:15 by hyu               #+#    #+#             */
/*   Updated: 2019/11/04 12:28:51 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_case(char c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else if (c <= 'z' && c >= 'a')
		return (0);
	else
		return (-1);
}

void	ft_ulstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_case(str[i]) == 1)
			ft_putchar(str[i] + 32);
		else if (ft_case(str[i]) == 0)
			ft_putchar(str[i] - 32);
		else
			ft_putchar(str[i]);
		i++;
	}
}
int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		ft_ulstr(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
