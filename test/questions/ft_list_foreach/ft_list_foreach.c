/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:19:29 by jbrown            #+#    #+#             */
/*   Updated: 2022/06/04 16:52:08 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		f(begin_list->data);
		printf("[%s]", (char *)begin_list->data);
		begin_list = begin_list->next;
	}
}

t_list	*new_list(void *data)
{
	t_list	*list;

	list = malloc(sizeof(list));
	list->data = data;
	return (list);
}

void	add_back(t_list *head, t_list *current)
{
	while (head->next)
		head = head->next;
	head->next = current;
}

void	func(void *data)
{
//	hi = malloc(sizeof(*hi));
	data = "World!";
}

int	main(void)
{
	t_list	*list;
	t_list	*check;
	int		i;

	i = 0;
	list = new_list("ello!");
	check = list;
	while(++i < 11)
	{
		add_back(list, new_list("Hello!"));
	}
	while (check)
	{
		printf("%s\n", (char *)check->data);
		check = check->next;
	}
	ft_list_foreach(list, &func);
	while (list)
	{
		printf("%s\n", (char *)list->data);
		list = list->next;
	}
}
