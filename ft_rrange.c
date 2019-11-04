/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:36:06 by hyu               #+#    #+#             */
/*   Updated: 2019/11/04 14:01:22 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		abs_value(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int		*ftrrange(int start, int end)
{
	int	step;
	int	range;
	int	*array;
	int	i;

	step = 1;
	if (start - end < 0)
		step = -1;
	range = abs_value(start - end);
	i = 0;
	array = malloc((range + 1) * sizeof(int));
	while (i < range + 1)
	{
		array[i] = end + step * i;
		i++;
	}
	return (array);
}
