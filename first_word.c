/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 20:40:03 by hyu               #+#    #+#             */
/*   Updated: 2019/11/02 20:50:13 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_isspace(char *str, int i)
{
	while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_firstword(char *str)
{
	int	i;

	i = 0;
	i = ft_isspace(str, i);
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_firstword(argv[1]);
	ft_putchar('\n');
	return (0);
}
