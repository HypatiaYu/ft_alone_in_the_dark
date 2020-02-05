/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 12:05:52 by hyu               #+#    #+#             */
/*   Updated: 2019/12/03 15:25:04 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isprime(int	i)
{
	if (i == 1)
		return (i);
	int j;

	j = i - 1;
	while (j > 1)
	{
		if (i % j == 0)
			return (0);
		j--;
	}
	return (1);
}

int		num_divider(int i, int j)
{
	int k;
	
	k = 0;
	if (j == 1)
		 return (1);
	while (i % j == 0)
	{
		i = i / j;
		k++;
	}
	return (k);
}

int		largest_prime(int i)
{
	int	k;
	if (ft_isprime(i) == 1)
		return (i);
	k = i - 1;
	while (k > 1)
	{
		if (i % k == 0 &&
				ft_isprime(k) == 1)
			return (k);
		k--;
	}
	return (k);
}

void	fprime(int i)
{
	int k;
	int asterisk;
	int	largestp;

	asterisk = 0;
	largestp = largest_prime(i);
	//ft_putnbr(largestp);

	if (ft_isprime(i) == 1)
	{
		ft_putnbr(i);
		return ;
	}
	k = 2;
	while (k < i)
	{
		if (i % k == 0 &&
				ft_isprime(k) == 1)
		{
			asterisk = num_divider(i, k);
			while (asterisk > 0)
			{
				ft_putnbr(k);
				if (k != largestp || asterisk > 1)
					ft_putchar('*');
				asterisk--;
			}
		}
		k++;
	}
}

