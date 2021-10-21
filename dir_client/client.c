#include "../includes/minitalk.h"

t_data	g_data;

void	sig_handler(int sig)
{
	(void)sig;
	usleep(50);
}

void	error_handler(void)
{
	if (g_data.error_flag == -1)
	{
		ft_putstr_fd ("Error! Send message error.\n", 1);
		exit(0);
	}
}

void	applying_bite_mask(int pid, char *str, int i, int counter_bite)
{
	unsigned char	bite_shift;

	bite_shift = (str[i] >> counter_bite) & 1;
	if (bite_shift == 0)
		g_data.error_flag = kill (pid, SIGUSR1);
	else
		g_data.error_flag = kill (pid, SIGUSR2);
	error_handler();
	pause();
}

void	decoder(char *str, int pid)
{
	int	i;
	int	counter_bite;
	int	len;

	len = ft_strlen(str);
	i = 0;
	while (len--)
	{
		counter_bite = 0;
		while (counter_bite < 8)
			applying_bite_mask (pid, str, i, counter_bite++);
		i++;
	}
	i = 0;
	while (i < 8)
	{
		g_data.error_flag = kill (pid, SIGUSR1);
		pause();
		i++;
	}
	ft_putstr_fd ("Message delivered.\n", 1);
}

int	main(int argc, char *argv[])
{
	int	pid;

	if (argc != 3)
	{
		ft_putstr_fd ("Error! Expected 2 arguments.\n", 1);
		return (0);
	}
	g_data.error_flag = 1;
	signal(SIGUSR1, sig_handler);
	pid = ft_atoi(argv[1]);
	decoder(argv[2], pid);
	return (0);
}
