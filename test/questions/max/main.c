/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:21:59 by jbrown            #+#    #+#             */
/*   Updated: 2022/06/11 13:21:59 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int		max(int* tab, unsigned int len);

int	main(int ac, char **av)
{
	int	*tab;
	int	current;
	int	i;

	tab = malloc(sizeof(*tab) * ac - 1);
	i = 1;
	while (i < ac)
	{
		tab[i - 1] = atoi(av[i]);
		i++;
	}
	printf("%i\n", max(tab, ac - 1));
	return (0);
}
