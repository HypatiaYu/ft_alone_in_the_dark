/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:19:37 by hyu               #+#    #+#             */
/*   Updated: 2019/11/25 15:35:30 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_space(char *str, int *i)
{
	while (str[*i] != '\0' && (str[*i] == ' ' || str[*i] == '\t'))
		*i = *i + 1;
}

void	ft_word(char *str, int *i)
{
	while (str[*i] != '\0' && str[*i] != ' ' && str[*i] != '\t')
	{
		ft_putchar(str[*i]);
		*i = *i + 1;
	}	
}

void	epur_str(char *str)
{
	int	i;

	i = 0;
	ft_space(str, &i);
	while (str[i] != '\0')
	{
		ft_word(str, &i);
		ft_space(str, &i);
		if (str[i] != '\0')
		{
			ft_putchar(' ');
		}
	}
}
int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		epur_str(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
