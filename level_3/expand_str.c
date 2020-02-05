/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:42:14 by hyu               #+#    #+#             */
/*   Updated: 2019/11/06 15:50:48 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_isspace(char *str, int *i)
{
	while (str[*i] != '\0' && (str[*i] == ' ' || str[*i] == '\t'))
		*i = *i + 1;
}

void	ft_ischar(char *str, int *i)
{
	while (str[*i] != '\0' && str[*i] != ' ' && str[*i] != '\t')
	{
		ft_putchar(str[*i]);
		*i = *i + 1;
	}
}

void	expand_str(char *str)
{
	int	i;
	
	i = 0;
	ft_isspace(str, &i);
	while (str[i] != '\0')
	{
		ft_ischar(str, &i);
		ft_isspace(str, &i);
		if (str[i] != '\0')
		{
			ft_putchar(' ');
			ft_putchar(' ');
			ft_putchar(' ');
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
