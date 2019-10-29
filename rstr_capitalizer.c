/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 13:54:19 by hyu               #+#    #+#             */
/*   Updated: 2019/10/29 14:54:33 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	str_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'Z' && str[i] > 'A' && str[i + 1] != ' ' && str[i + 1] != '\t' && str[i + 1] != '\0')
			ft_putchar(str[i] + 32);
		else if (str[i] < 'z' && str[i] > 'a' && (str[i + 1] == ' ' || str[i + 1] == '\0' || str[i + 1] == '\t'))
			ft_putchar(str[i] - 32);
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int j;

	j = 1;
	if (argc > 1)
	{
		while (argv[j])
		{
			str_capitalizer(argv[j]);
			j++;
		}
	}
	else if (argc == 1)
		ft_putchar('\n');
	return (0);
}
