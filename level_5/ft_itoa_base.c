/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 16:53:02 by hyu               #+#    #+#             */
/*   Updated: 2019/12/05 17:27:53 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_digits(int i, int base)
{
	int	j;

	j = 0;
	if (i < 0)
	{
		j++;
		i = -i;
	}
	while (i > 0)
	{
		i = i / base;
		j++;
	}
	return (j);
}

int		abs_val(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}

char	lower_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_itoa(int i, int base)
{
	char 	*str;
	int		j;
	char	array[16] = "0123456789ABCDEF";

	j = digits(i, base);
	str = (char*)(malloc((j + 1) * sizeof(char)));
	str[j] = '\0';
	if (i < 0)
		str[0] = '-';
	i = abs_val(i);
	j = j - 1;
	while (i > 0)
	{
		str[j] = array[i % base];
		j--;
		i = i / base;
	}
	return (str);
}
