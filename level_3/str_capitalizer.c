/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:40:59 by hyu               #+#    #+#             */
/*   Updated: 2019/11/01 16:52:39 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_isspace(c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		ft_iscap(c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (0);
	return (-1);
}

void	str_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && ft_isspace(str[i]) == 1)
		{
			ft_putchar(str[i]);
			i++;
		}
		if (str[i])
		{
			if (ft_iscap(str[i]) == 0)
				ft_putchar(str[i] - 32);
			else
				ft_putchar(str[i]);
			i++;
		}
		while (str[i] && ft_isspace(str[i]) == 0)
		{
			if (ft_iscap(str[i]) == 1)
				ft_putchar(str[i] + 32);
			else
				ft_putchar(str[i]);
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		ft_putchar('\n');
	else
	{
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			i++;
		}
	}
	return (0);
}
