/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 10:52:09 by hyu               #+#    #+#             */
/*   Updated: 2019/12/03 10:56:22 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = *c;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	int			surveyor;
	unsigned int i;

	i = 0;
	surveyor = 0;
	while (surveyer == 1)
	{
		i = 0;
		surveyer = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap(&tab[i], &tab[i + 1]);
				surveyer = 1;
			}
			i++;
		}
	}
}
