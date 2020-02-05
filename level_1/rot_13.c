/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 18:20:16 by hyu               #+#    #+#             */
/*   Updated: 2019/10/31 18:41:10 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_letter(char c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}

int		ft_is_am(char c)
{
	if (c <= 'M' && c >= 'A')
		return (1);
	else if (c <= 'm' && c >= 'a')
		return (1);
	else if (c <= 'Z' && c >= 'N')
		return (0);
	else if (c <= 'z' && c >= 'n')
		return (0);
	return (-1);
}

void	rot13(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (ft_is_letter(str[i]) == 1 && ft_is_am(str[i]) == 1)
			ft_putchar(str[i] + 13);
		else if (ft_is_letter(str[i]) == 1 && ft_is_am(str[i]) == 0)
			ft_putchar(str[i] - 13);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		rot13(argv[1]);
		ft_putchar('\n');
		return (0);
	}
	ft_putchar('\n');
	return (0);
}
