/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 16:01:30 by hyu               #+#    #+#             */
/*   Updated: 2019/10/29 16:32:19 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr(int i)
{
	if (i >= 10)
		ft_putnbr(i / 10);
	ft_putchar((i % 10) + '0');
}

int		ft_wordend(char *str, int i)
{
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\0' ) && i >= 0)
		i--;
	return (i);
}

int		ft_wordbeginning(char *str, int i)
{
	while (str[i] != ' ' && str[i] != '\t' && i >= 0)
		i--;
	return (i + 1);
}

void	ft_printword(char *str, int i)
{
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_revwstr(char *str)
{
	int i;
	
	i = ft_strlen(str);

	while (i > 0)
	{
		i = ft_wordend(str, i);
		if (i >= 0)
		{
			i = ft_wordbeginning(str, i);
			ft_printword(str, i);
			i--;
		}
		i = ft_wordend(str, i);
		if (i > 0)
			ft_putchar(' ');
	}
}
int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_revwstr(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
