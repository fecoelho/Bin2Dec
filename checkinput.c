//
// Created by Felipe Coelho on 20/02/20.
//

#include "bin2dec.h"

int 	checkinput(char *input) //Retorna zero se o inputut estiver errado e 1 se estiver okay.
{
	int i;

	i = 0;
	while(input[i] != '\0')
	{
		if (input[i] != 48 && input[i] != 49)
		{
			printf("Não é um binário.");
			return (0);
		}
		if (i > 32)
		{
			printf("Binário com mais de 32 bits");
			return (0);
		}
		i++;
	}
	return (1);
}