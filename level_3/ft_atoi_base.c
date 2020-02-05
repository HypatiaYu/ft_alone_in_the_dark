/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 21:06:22 by hyu               #+#    #+#             */
/*   Updated: 2019/11/03 17:05:32 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_atoi(char *str)
{
	int	i;
	int	j;
	int	sign;

	i = 0;
	sign = 1;
	j = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] <= 'f' && str[i] >= 'a')
			j = j * 16 + str[i] + 10 - 'a';
		else if (str[i] <= '9' && str[i] >= '0')
			j = j * 16 + str[i] - '0';
		i++;
	}
	return (j * sign);
}

char	*ft_lower(char *str)
{
	int i;
	
	i = 0;
	(char*)str;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int     ft_atoi_base(const char *str, int str_base)
{
    char    bases[16] = "0123456789abcdef";
	int	i;
	int	j;

	i = 0;
	j = ft_atoi(str);
	while (j > 10)
	{
		i = i * str_base + (j % str_base);
		j = j/str_base;
	}
    return (0);
}
