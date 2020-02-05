/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 13:02:01 by hyu               #+#    #+#             */
/*   Updated: 2019/11/01 13:17:43 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_Z(char c)
{
	if (c == 'Z' || c >= 'z')
		return (1);
	else if ((c <= 'y' && c >= 'a') || (c <= 'Y' && c >= 'A'))
		return (0);
	else
		return (-1);
}

void	ft_rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_Z(str[i]) == 1)
			ft_putchar(str[i] - 25);
		else if (ft_is_Z(str[i]) == 0)
			ft_putchar(str[i] + 1);
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
		ft_rotone(argv[1]);
	ft_putchar('\n');
	return (0);
}
