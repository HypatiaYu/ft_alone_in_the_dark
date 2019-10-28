/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 14:44:23 by hyu               #+#    #+#             */
/*   Updated: 2019/10/28 15:28:50 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_strrev(char *str)
{
	int		left;
	int		right;
	char	c;

	left = 0;
	right = ft_strlen(str) - 1;
	while (left < right)
	{
		c = str[left];
		str[left] = str[right];
		str[right] = c;
		--right;
		++left;
	}
	return (str);
}
