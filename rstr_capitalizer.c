/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:00:37 by hyu               #+#    #+#             */
/*   Updated: 2019/11/04 13:29:47 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_space(char *str, int i)
{
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
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

int		ft_word(char *str, int i)
{
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
		if (str[i + 1] == '\0' || str[i + 1] == ' ' || str[i + 1] == '\t')
		{
			if (ft_case(str[i]) == 0)
				ft_putchar(str[i] - 32);
			else
				ft_putchar(str[i]);
		}
		else
		{
			if (ft_case(str[i]) == 1)
				ft_putchar(str[i] + 32);
			else
				ft_putchar(str[i]);
		}
		i++;
	}
	return (i);
}

void	rstr_capitalizer(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		i = ft_space(str, i);
		i = ft_word(str, i);
	}
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			rstr_capitalizer(argv[i]);
			ft_putchar('\n');
			i++;
		}
		return (0);
	}
	ft_putchar('\n');
	return (0);
}
