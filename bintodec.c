//
// Created by Felipe Coelho on 20/02/20.
//

#include "bin2dec.h"

int 	bintodec(char *binp)
{
	int i;
	int dec;

	i = 0;
	dec = 0;
	while (binp[i] != '\0')
	{
		if (binp[i] == '1')
		{
			dec = dec + ft_recursive_power(2, i);
		}
		i++;
	}
	return (dec);
}
