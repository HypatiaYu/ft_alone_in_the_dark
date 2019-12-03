/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 10:32:19 by hyu               #+#    #+#             */
/*   Updated: 2019/12/03 10:43:28 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	swap_value(t_list *a, t_list *b)
{
	int switch;

	switch = a->data;
	a->data = b;
	b = switch;
}
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		surveyer;
	t_list *tmp;

	if (lst == 0)
		return NULL;

	tmp = lst;
	surveyer = 0;
	while (surveyer == 1)
	{
		surveyer = 0;
		while (tmp!= 0)
		{
			if (cmp(tmp->data, tmp->next->data)==0)
			{
				swap_value(tmp->data, tmp->next->data);
				surveyer = 1;
			}
			tmp = tmp->next;
		}
		tmp = lst;
	}
	return (lst);
}
