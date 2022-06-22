/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:55:07 by jbrown            #+#    #+#             */
/*   Updated: 2022/06/18 18:16:17 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_prime(int n)
{
	int	i;

	i = 3;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i += 2;
	}
	return (n);
}

int	next_prime(int n)
{
	if (n == 4)
		return (3);
	while (!is_prime(n))
		n += 2;
	return (n);
}

int	main(int ac, char **av)
{
	int	i;
	int	n;

	if (ac != 2)
	{
		printf("\n");
		return (0);
	}
	i = 2;
	n = atoi(av[1]);
	if (n == 1 || is_prime(n))
	{
		printf("%i\n", n);
		return (0);
	}
	while (n != 1)
	{
		if (n % i == 0)
		{
			printf("%i", i);
			n /= i;
			if (n != 1)
				printf("*");
		}
		else
		{
			i = next_prime(i + 2);
		}
	}
	printf("\n");
	return (0);
}
