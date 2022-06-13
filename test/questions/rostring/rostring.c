/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:13:05 by jbrown            #+#    #+#             */
/*   Updated: 2022/06/04 18:30:25 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_word(char *str)
{
	while (*str == ' ')
		*str++;
	while (*str && *str != ' ')
	{
		write(1, &*str, 1);
		*str++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (av[1][i] && av[1][i] == ' ')
		i++;
	while (av[1][i] && av[1][i] != ' ')
		i++;
	if (av[1][i])
	{
		while (av[1][i])
		{
			if (av[1][i] != ' ')
			{
				write_word(&av[1][i]);
				write(1, " ", 1);
				while (av[1][i] && av[1][i] != ' ')
					i++;
			}
			else
				i++;
		}
	}
	write_word(av[1]);
}
