#include<unistd.h>
#include<fcntl.h>
#include<libgen.h>
#include<errno.h>
#include<string.h>

int	ft_strlen(char *str)
{
	char 	*ptr;

	ptr = str;
	while (*str)
	{
		str++;
	}
	return str - ptr;
}

void	ft_putstr(int chan, char *str)
{
	write(chan, str, ft_strlen(str));
}

void	ft_diplay_file(char *file, char *prog_name)
{
	int	fd;
	int	n;
	char	buf[2];

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(2, prog_name);
		ft_putstr(2, ": ");
		ft_putstr(2, file);
		ft_putstr(2, ": ");
		ft_putstr(2, strerror(errno));
		return;
	}

	while((n = read(fd, buf, 2)) > 0)
	{
		write(1, buf, n);
	}
	close(fd);
}

void	ft_display_stdin(void)
{
	int	n;
	char	buf[2];

	while ((n = read(0, buf, 2)) > 0 )
		write(1, buf, n);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
			ft_diplay_file(argv[i++], basename(argv[0]));
	}
	else
		ft_display_stdin();
	return (0);
}
