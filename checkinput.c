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
			//TODO mensagem de erro que não é binário
			return (0);
		//if (i > 8)
			//TODO msg de erro que é maior que o número de bits;
		//	return (0);
		i++;
	}
	return (1);
}
