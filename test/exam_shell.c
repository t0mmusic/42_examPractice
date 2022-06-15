/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exam_shell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 20:21:45 by jbrown            #+#    #+#             */
/*   Updated: 2022/06/15 20:44:48 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "./gnl/get_next_line_bonus.h"

void	info_dump(void)
{
	printf("Welcome! This is a student built practice module for 42 exam rank 02.\n\n");
	printf("It functions like the real exam, with a total of four questions each\n");
	printf("randomly selected from a pool. To get to the next question, you will have\n");
	printf("to complete the current one.\n\nUnlike the real exam, a trace file will be ");
	printf("generated for you to see which test cases you may have failed.\nThe test cases ");
	printf("are mostly made by me, although I was able to get ahold of some real trace files ");
	printf("for some of the later questions.\nGood luck!\n\n");
}

int	main(void)
{
	char	*level_args[] = {"sh", "level.sh", NULL};
	char	*grade_args[] = {"sh", "grademe.sh", NULL};
	char	*user_input;
	int		pid;

	info_dump();
	pid = fork();
	if (!pid)
		execv("/bin/sh", level_args);
	while (1)
	{
		user_input = get_next_line(0);
		if (!strcmp("grademe\n", user_input))
		{
			pid = fork();
			if (!pid)
				execv("/bin/sh", grade_args);
		}
		else if (!strcmp("exit\n", user_input))
			exit (0);
		else
			printf("Invalid input!\n");
	}
	return (0);
}
