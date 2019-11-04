/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 21:20:18 by hyu               #+#    #+#             */
/*   Updated: 2019/11/03 21:32:47 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		hiden_p(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str1[i] && str2[j])
	{
		while ((str1[i] == str2[j]) && str2[j])
		{
			j++;
			i++;
		}
		while (str1[i] != str2[j] && str2[j] && str1[i])
		{
			j++;
		}
	}
	if (str1[i] == '\0')
		return (1);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_putchar(hiden_p(argv[1], argv[2]) + '0');
	ft_putchar('\n');
	return (0);
}
