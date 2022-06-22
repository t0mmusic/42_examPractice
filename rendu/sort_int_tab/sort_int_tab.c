/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:32:22 by jbrown            #+#    #+#             */
/*   Updated: 2022/06/04 18:43:32 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				tmp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
		}
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			sort_int_tab(tab, size);
		i++;
	}
}

int	main(void)
{
	int	i;
	int	tab[] = {5, 5, 4, 3, 2, 1};

	sort_int_tab(tab, 6);
	i = 0;
	while (i < 6)
	{
		printf("%i\n", tab[i]);
		i++;
	}
	return (0);
}
