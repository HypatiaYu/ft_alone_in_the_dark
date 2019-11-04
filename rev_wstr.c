/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:17:17 by hyu               #+#    #+#             */
/*   Updated: 2019/11/04 15:40:41 by hyu              ###   ########.fr       */
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

int		ft_r_isspace(char *str, int i)
{
	while (i >= 0 && (str[i] == ' ' || str[i] == '\0' || str[i] == '\t'))
	{
		i--;
	}
	return (i);
}

int		ft_r_isword(char *str, int i)
{
	while (i>= 0 && str[i] != ' ' && str[i] != '\t')
		i--;
	return (i);
}

void	ft_printword(char *str, int i)
{
	int	j;

	j = 0;
	while (str[i + j] != '\0' && str[i + j] != ' ' && str[i + j] != '\t')
	{
		ft_putchar(str[i + j]);
		j++;
	}
	if (i != 0)
		ft_putchar(' ');
}
int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		i = ft_strlen(argv[1]);
		while (i >= 0)
		{
			i = ft_r_isspace(argv[1], i);
			i = ft_r_isword(argv[1], i);
			ft_printword(argv[1], i + 1);
		}
	}
	ft_putchar('\n');
	return (0);
}
