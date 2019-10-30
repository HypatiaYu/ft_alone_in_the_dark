/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 12:53:28 by hyu               #+#    #+#             */
/*   Updated: 2019/10/30 13:23:01 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int	step;
	int	range;
	int	*array;
	int	i;

	i = 0;
	step = 0;
	if (start == end)
		return (NULL);
	if (end - start < 0)
		step = -1;
	else if (end - start > 0)
		step = 1;
	range = (end - start) * step;
	array = (int*)malloc((range + 1) * sizeof(int));
	while (start != end)
	{
		array[i] = start;
		start = start + step;
		i++;
	}
	array[i] = end;
	return (array);
}
