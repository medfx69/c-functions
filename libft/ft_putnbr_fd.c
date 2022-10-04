#include <unistd.h>

static void	ft_putchar(char n, int fd)
{
	write(fd, &n, 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	num;
	unsigned int	snum;
	unsigned int	j;

	j = 1;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = nb * -1;
	}
	num = nb;
	snum = num;
	while (num > 9)
	{
		j = j * 10;
		num = num / 10;
	}
	while (j > 0)
	{
		ft_putchar(snum / j + '0', fd);
		snum = snum - (snum / j) * j;
		j = j / 10;
	}
}
