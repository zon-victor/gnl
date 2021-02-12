
#include "libft.h"

void ft_putnbr(int n)
{
	unsigned int	nb;

	if (n < 0)
	{
		nb = -n;
		ft_putchar('-');
	}
	else
		nb = n;
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	else
	{
		if (n > 0)
			ft_putchar(nb + '0');
		else
			ft_putchar(-nb + '0');
	}
}
