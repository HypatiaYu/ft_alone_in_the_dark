/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:08:10 by hyu               #+#    #+#             */
/*   Updated: 2019/10/28 17:17:55 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strpbrk(const char *s, const char *charset)
{
	int	i;
	int j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (charset[j])
		{
			if (charset[j] == s[i])
				return ((char*)s + i);
			j++;
		}
		if (charset[j] == '\0')
			i++;
	}
	return (NULL);
}
