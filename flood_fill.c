/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 09:17:43 by hyu               #+#    #+#             */
/*   Updated: 2019/12/03 10:08:37 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"
#include <stdlib.h>
#include <stdio.h>

void	search(char **tab, t_point size, t_point begin, char match)
{
	if (begin.x >= size.x || begin.y >= size.y || begin.x < 0 || begin.y < 0
			|| tab[begin.y][begin.x] != match)
	   return ;

		tab[begin.y][begin.x] = 'F';
		search(tab, size, (t_point){begin.x + 1, begin.y}, match);
		search(tab, size, (t_point){begin.x - 1, begin.y}, match);
		search(tab, size, (t_point){begin.x , begin.y + 1}, match);
		search(tab, size, (t_point){begin.x , begin.y - 1}, match);
	
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char start;
	if (begin.x >= size.x || begin.y >= size.y || begin.x < 0 || begin.y < 0)
       return ;
	start = tab[begin.y][begin.x]; 
	search(tab, size, begin, start);
}

char **make_area(char **zone, t_point size)
{
	char **array;
	int	i;
	int	j;

	i = 0;
	array = (char**)malloc(size.y * sizeof(char*));
	while (i < size.y)
	{
		array[i] = (char*)malloc(size.x * sizeof(char));
		j = 0;
		while (j < size.x)
		{
			array[i][j] = zone[i][j];
			j++;
		}
		array[i][size.x] = '\0';
		i++;
	}
	return (array);
}
int		main(void)
{
	char **array;
	t_point begin = {1,2};
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};
	
	array = make_area(zone, size);
	int	i;
	i = 0;
	while (i < size.y)
	{
		printf("%s\n", array[i]);
		i++;
	}

	flood_fill(array, size, begin);
	i = 0;
    while (i < size.y)
    {
        printf("%s\n", array[i]);
        i++;
    }

	return (0);
}
