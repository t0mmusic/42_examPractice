/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:20:44 by jbrown            #+#    #+#             */
/*   Updated: 2022/06/12 15:30:10 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int	max;
	int	i;

	if (!len)
		return (len);
	max = tab[0];
	i = 1;
	while (i < len - 1)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int	main(void)
{
	int	tab[] = {1};

	printf("%i\n", max(tab, 1));
	return (0);
}
