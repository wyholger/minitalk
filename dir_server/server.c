#include "../includes/minitalk.h"

t_data	g_data;

void	error_handler(void)
{
	if (g_data.error_flag == -1)
	{
		ft_putstr_fd ("Error! Send message error.\n", 1);
		exit(0);
	}
}

void	sig_handler(int sig_num, siginfo_t *siginfo, void *context)
{
	(void) siginfo;
	(void) context;
	if (sig_num == SIGUSR2)
		g_data.simbol |= 1 << g_data.position_digit;
	g_data.position_digit++;
	usleep(45);
	g_data.error_flag = kill((int)siginfo->si_pid, SIGUSR1);
	error_handler();
	if (g_data.position_digit == 8)
	{
		g_data.position_digit = 0;
		if (!g_data.simbol)
			ft_putchar_fd('\n', 1);
		else
			write(1, &g_data.simbol, 1);
		g_data.simbol = 0;
	}
}

int	main(void)
{
	struct sigaction	sg;
	int					pid;

	pid = getpid();
	ft_putstr_fd("Server PID is ", 1);
	ft_putnbr_fd(pid, 1);
	ft_putchar_fd('\n', 1);
	sg.sa_flags = SA_SIGINFO;
	sg.sa_sigaction = sig_handler;
	sigaction(SIGUSR1, &sg, NULL);
	sigaction(SIGUSR2, &sg, NULL);
	g_data.error_flag = 1;
	while (1)
		pause();
	return (0);
}
