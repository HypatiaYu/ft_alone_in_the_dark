/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 12:18:38 by hyu               #+#    #+#             */
/*   Updated: 2019/10/30 12:29:37 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;
	
	i = 7;
	while (i >= 0)
	{
		bit = (octet >> i & 1);
		ft_putchar(bit + '0');
		i--;
	}
}	
