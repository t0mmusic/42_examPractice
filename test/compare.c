#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include "./gnl/get_next_line_bonus.h"

char    **tests(int i);

/*	Prints a string to the file referenced by fd.	*/

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(fd, str, i);
}

/*	Writes the input and both outpus to the trace file.	*/

void	write_args(char **args, char *s1, char *s2, int fd)
{
	int	i;

	i = 1;
	ft_putstr_fd("Input: ",  fd);
	while (args && args[i])
	{
		ft_putstr_fd(args[i], fd);
		ft_putstr_fd(" ", fd);
		i++;
	}
	ft_putstr_fd("\n\n",  fd);
	ft_putstr_fd("Expected Output: ",  fd);
	ft_putstr_fd(s1,  fd);
	ft_putstr_fd("User Output:     ",  fd);
	ft_putstr_fd(s2,  fd);
	ft_putstr_fd("-----------------------------------\n",  fd);
	ft_putstr_fd("\n",  fd);
}

/*	Compares the user's output with the expected output. Prints
	OK or KO depending on whether the current answer matched the
	expected outcome.	*/

int	fail_check(int fd, char *user, char *expected)
{
	if (strcmp(user, expected))
	{
		ft_putstr_fd("KO :(\n", fd);
		return (1);
	}
	ft_putstr_fd("OK :)\n", fd);
	return (0);
}

/*	Gets the users input from standard input and the expected input
	from the 'compare.txt' file in the test folder. While there is
	a user output, it will check the expected output with the
	user's output.	*/

int	checker(int fd_compare, int fd_trace)
{
	char	*user;
	char	*expected;
	int		fail = 0;
	int		i;
	char	**args;

	i = 0;
	args = tests(i);
	user = get_next_line(0);
	expected = get_next_line(fd_compare);
	while (user)
	{
		fail += fail_check(fd_trace, user, expected);
		write_args(args, expected, user, fd_trace);
		i++;
		args = tests(i);
		free(user);
		free(expected);
		user = get_next_line(0);
		expected = get_next_line(fd_compare);
	}
	close(fd_compare);
	close(fd_trace);
	return (fail);
}

/*	Opens the compare.txt file and the trace.txt files for testing.
	Once the tests have been run, it prints the result.	*/

int main(int ac, char **av)
{
	char	*shell_args[] = {"sh", "level.sh", NULL};
	int		fd_compare;
	int		fd_trace;
	int		fail;

	fd_compare = open(av[1], O_RDONLY);
	fd_trace = open(av[2], O_RDWR);
	fail = checker(fd_compare, fd_trace);
	if (fail)
	{
		printf("KO :(\n");
		printf("Check trace.txt in the submission folder for details.\n");
	}
	if (!fail)
	{
		printf("OK :)\n");
		execv("/bin/sh", shell_args);
	}
	return (0);
}
