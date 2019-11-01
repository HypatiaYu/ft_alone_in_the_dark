/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 13:21:49 by hyu               #+#    #+#             */
/*   Updated: 2019/11/01 13:48:50 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(char c)
{
	if (( c == ' ') || (c == '\t') || (c == '\n') || (c == '\v') || (c == '\r')
			|| (c == '\f'))
		return (1);
	return (0);
}

int		ft_is_number(char c)
{
	if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a'))
		return (0);
	else if (c <= '9' && c >= '0')
		return (1);
	return (-1);
}

int		ft_sign(char c)
{
	if (c == '+')
		return (1);
	else if (c == '-')
		return (0);
	return (-1);
}

int		ft_atoi(const char *str)
{
	int i;
	int	sign;
	int	j;

	j = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (ft_sign(str[i]) == 0)
	{
		sign = -1;
	}
	if (ft_sign(str[i]) == 0 || ft_sign(str[i]) == 1)
		i++;
	while (ft_is_number(str[i]) == 1 && str[i])
	{
		j = str[i] + j * 10 - '0';
		i++;
	}
	return (j * sign);
}
