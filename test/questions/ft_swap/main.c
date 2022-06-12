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
void	ft_swap(int *a, int *b);

int	main(int ac, char **av)
{
	int	a = atoi(av[1]);
	int	b = atoi(av[2]);
	ft_swap(&a, &b);
	printf("%i %i\n", a, b);
	return (0);
}
