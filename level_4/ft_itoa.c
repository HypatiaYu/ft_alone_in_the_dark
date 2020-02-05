/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:53:16 by hyu               #+#    #+#             */
/*   Updated: 2019/11/06 16:30:48 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		number_of_digits(int	nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
		i++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

int		abs_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

char	*ft_itoa(int nbr)
{
	int	digits;
	char	*array;

	digits = number_of_digits(nbr);
	array = (char*)malloc((digits + 1) * sizeof(char));
	array[digits] = '\0';
	if (nbr == 0)
	{
		array[0] = '0';
		return (array);
	}
	else if (nbr < 0)
	{
		array[0] = '-';
	}
	digits--;
	while (nbr != 0)
	{
		array[digits] = abs_value(nbr % 10) + '0';
		nbr = nbr / 10;
		digits--;
	}
	return (array);
}
