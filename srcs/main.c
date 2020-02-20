#include "bin2dec.h"

int		main(int argc, char **argv)
{
	int i;
	int dec;

	i = 1;
	if (argc == 1)
	{
		printf("Nothing to convert.\n");
		return (0);
	}
	while (i < argc)
	{
		printf("Input %d: ", i);
		if ((checkinput(argv[i])) == 1)
		{
			revbin(argv[i], ft_strlen(argv[i]));
			dec = bintodec(argv[i]);
			printf("%d\n", dec);
		}
		i++;
	}
}
