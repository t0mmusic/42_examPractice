#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>

char	**tests(int i);

/*  Tester for programs. Runs a number of tests for a program in
    seperate processes. */

void	print_args(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
}

/*	Checks if a process is still running, if it has run for too
	long, kills that process.	 */

void	time_out(int pid)
{
	int	i;
	int	kill_val;

	i = 0;
	while (i < 50)
	{
		usleep(50000);
		waitpid(-1, &kill_val, WNOHANG);
		if (kill_val)
			i++;
		else
			return ;
	}
	printf("Timeout\n");
	kill(pid, SIGKILL);
}

int	main(int ac, char **av)
{
	int		pid;
	int		i = 0;
	char	**argv;

	argv = tests(i);
	while (argv[0])
	{
		i++;
		pid = fork();
		if (!pid)
		{
			execv(av[1], argv);
			exit (1);
		}
		argv = tests(i);
		time_out(pid);
	}
	waitpid(pid, 0, 0);
	return (0);
}
