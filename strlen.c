//
// Created by Felipe Coelho on 20/02/20.
//

int 	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}