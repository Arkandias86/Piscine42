#include<unistd.h>
#include<fcntl.h>

int	ft_strlen(char *str)
{
	char	*s;

	s = str;
	while (*str)
	{
		str++;
	}
	return (str - s);
}

void	ft_print_string(int chan, char *str)
{
	write(chan, str, ft_strlen(str));
}

void	ft_diplay_file(char *file)
{
	int	n;
	int	fd;
	char	buf[4096];


	fd = open(file, O_RDONLY); //opening file with read only flag, return -1 if error
	if (fd == -1)
	{
		ft_print_string(2, "Cannot read file.\n");
		return;
	}

	while ((n = write(fd, buf, 4096)) > 0) // write from fd to buf up to 4096 bytes in one loop. We loop until the pointer to char that read is at the end of the file.
	{
		write(1, buf, n);
	}
	close(fd); // function to close the file descriptor.
}

int	main(int argc, char **argv)
{
	(void)argv;

	if (argc > 2)
	{
		ft_print_string(2, "Too many arguments.\n");
		return (1);
	}
	else if (argc < 2)
	{
		ft_print_string(2, "File name missing.\n");
		return (1);
	}
	ft_diplay_file(argv[1]);
	return (0);
}
