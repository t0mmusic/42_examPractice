/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:58:11 by jbrown            #+#    #+#             */
/*   Updated: 2022/06/04 18:12:15 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != ' ')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	i = 0;
	while (av[1][i])
		i++;
	while (i >= 0)
	{
		if (av[1][i] == ' ')
		{
			write_word(&av[1][i + 1]);
			write(1, " ", 1);
		}
		i--;
	}
	write_word(av[1]);
	return (0);
}
