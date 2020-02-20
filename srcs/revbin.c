#include "bin2dec.h"

void	revbin(char *bin, int size)
{
	char aux;
	int i;

	i = 0;
	size = size - 1;
	while (i < size)
	{
		aux = bin[i];
		bin[i] = bin[size];
		bin[size] = aux;
		i++;
		size--;
	}
}
