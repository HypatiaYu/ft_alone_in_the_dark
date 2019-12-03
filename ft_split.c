/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:44:38 by hyu               #+#    #+#             */
/*   Updated: 2019/12/03 15:16:41 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void	ft_space(char *str, int *i)
{
	while (str[*i] != '\0' && (str[*i] == ' ' || str[*i] == '\t'))
		*i = *i + 1;
}

void	ft_word(char *str, int *i)
{
	while (str[*i] != '\0' && str[*i] != ' ' && str[*i] != '\t')
		*i = *i + 1;
}

int		ft_numword(char *str)
{
	int	num;
	int	i;

	num = 0;
	i = 0;
	ft_space(str, &i);
	//ft_putchar('n');
	while (str[i] != '\0')
	{
		//ft_putchar('n');
		num++;
		ft_word(str, &i);
		ft_space(str, &i);
	}
	return (num);
}

char	**ft_split(char *str)
{
	char **array;
	int		words;
	int		i;
	int		j;

	words = ft_numword(str);
	i = 0;
	j = 0;
	array = (char**)malloc((words + 1)* sizeof(char*));
	ft_space(str, &i);
	while (j < words)
	{
		array[j] = &str[i];
		j++;
		ft_word(str, &i);
		str[i] = '\0';
		i++;
		ft_space(str, &i);
	}
	array[words] = NULL;
	return (array);
}

