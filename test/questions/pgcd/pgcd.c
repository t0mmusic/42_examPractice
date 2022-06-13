/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 20:47:02 by jbrown            #+#    #+#             */
/*   Updated: 2022/06/09 20:54:53 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	one;
	int	two;
	int	n;

	if (ac != 3)
	{
		printf("\n");
		return (0);
	}
	one = atoi(av[1]);
	two = atoi(av[2]);
	if (one < two)
		n = one;
	else
		n = two;
	while (one % n != 0 || two % n != 0)
		n--;
	printf("%i\n", n);
	return (0);
}
