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
int	ft_strlen(char *str);

int	main(int ac, char **av)
{
	printf("%i\n", ft_strlen(av[1]));
	return (0);
}
