/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:52:33 by jbrown            #+#    #+#             */
/*   Updated: 2022/06/04 17:02:40 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	t_list	*next;

	current = *begin_list;
	if (!cmp(data_ref, current->data))
	{
		*begin_list = current->next;
		free (current);
		current = *begin_list;
	}
	while(current->next)
	{
		if (!cmp(data_ref, current->next->data))
		{
			next = current->next->next;
			free (current->next);
			current->next = next;
		}
		current = current->next;
	}
}
