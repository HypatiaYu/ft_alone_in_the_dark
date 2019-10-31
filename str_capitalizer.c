/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:06:03 by hyu               #+#    #+#             */
/*   Updated: 2019/10/31 16:37:31 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_space(char *str, int i)
{
	while ((str[i] == ' ' || str[i] == '\t') && str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int		ft_case(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (0);
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (2);
}

int		ft_is_letter(char *str, int i)
{
	if (ft_case(str[i]) == 0)
		ft_putchar(str[i]);
	else if (ft_case(str[i]) == 1)
		ft_putchar(str[i] - 32);
	i++;
	while (str[i] != ' '&& str[i] != '\t' && str[i])
	{
		if (ft_case(str[i]) == 1)
			ft_putchar(str[i]);
		else if (ft_case(str[i]) == 0)
			ft_putchar(str[i] + 32);
		else
			ft_putchar(str[i]);
		i++;
	}
	return (i);
}

void	print_sentence(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i = ft_is_space(str, i);
		i = ft_is_letter(str, i);
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			print_sentence(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
