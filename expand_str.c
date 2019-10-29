/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:24:14 by hyu               #+#    #+#             */
/*   Updated: 2019/10/28 17:48:56 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_whitespace(int i, char *str)
{
	while (str[i] == ' ' | str[i] == '\t')
		i++;
	return (i);
}

int		ft_word(int i, char *str)
{
	while (str[i] != ' ' && str[i] != '\0' && str[i] != '\t')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

void	expand_str(char *str)
{
	int i;
	int j;

	i = 0;
	i = ft_whitespace(i, str);
	while (str[i])
	{
		i = ft_word(i, str);
		i = ft_whitespace(i, str);
		if (str[i] != '\0')
		{
			j = 3;
			while (j > 0)
			{
				ft_putchar(' ');
				j--;
			}
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	ft_putchar('\n');
	return (0);
}
