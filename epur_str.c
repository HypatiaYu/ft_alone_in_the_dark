/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 20:08:49 by hyu               #+#    #+#             */
/*   Updated: 2019/10/31 20:22:03 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_space(char c)
{
	int i;

	i = 0;
	if (c == ' ' || c == '\t')
		i = 1;
	return (i);
}

int		ft_whitespace(char *str, int i)
{
	while ((ft_is_space(str[i]) == 1) && str[i] != '\0')
		i++;
	return (i);
}

int		ft_char(char *str, int i)
{
	while ((ft_is_space(str[i]) == 0) && str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		i = ft_whitespace(argv[1], i);
		while (argv[1][i])
		{
			i = ft_char(argv[1], i);
			i = ft_whitespace(argv[1], i);
			if (argv[1][i] != '\0')
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
	return (0);
}
