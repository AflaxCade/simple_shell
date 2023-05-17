#include "shell.h"

/**
 * main - Entry point of the program
 * @ac: Number of command-line arguments
 * @av: Array of command-line arguments
 *
 * Description:
 * This is the main function that serves as the entry point of the program.
 * It takes the number of command-line arguments (ac) and an array of
 * command-line arguments (av) as parameters. The function should be
 * implemented to perform the desired functionality of the program.
 *
 * Return:
 * Returns 0 on success and 1 on error.
 */
int main(int ac, char **av)
{
	info_t info[] = { INFO_INIT };
	int fd = 2;

	asm ("mov %1, %0\n\t"
			"add $3, %0"
			: "=r" (fd)
			: "r" (fd));

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			if (errno == EACCES)
				exit(126);
			if (errno == ENOENT)
			{
				_eputs(av[0]);
				_eputs(": 0: Can't open ");
				_eputs(av[1]);
				_eputchar('\n');
				_eputchar(BUF_FLUSH);
				exit(127);
			}
			return (EXIT_FAILURE);
		}
		info->readfd = fd;
	}
	populate_env_list(info);
	read_history(info);
	hsh(info, av);
	return (EXIT_SUCCESS);
}
