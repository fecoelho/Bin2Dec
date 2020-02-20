#include "bin2dec.h"

int		ft_recursive_power(int nb, int power)
{
	int x;

	x = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (x * ft_recursive_power(nb, power - 1));
}