#include "bin2dec.h"

int 	checkinput(char *input) //Retorna zero se o inputut estiver errado e 1 se estiver okay.
{
	int i;

	i = 0;
	while(input[i] != '\0')
	{
		if (input[i] != 48 && input[i] != 49)
		{
			printf("It is not a binary.\n");
			return (0);
		}
		if (i > 32)
		{
			printf("Binary longer than 32 bits\n");
			return (0);
		}
		i++;
	}
	return (1);
}