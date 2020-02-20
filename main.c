/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <fcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 03:28:40 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/20 03:37:36 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bin2dec.h"

int		main(int argc, char **argv)
{
	int i;
	int dec;

	i = 1;
	while (i < argc)
	{
		if ((checkinput(argv[i])) == 1)
		{
			revbin(argv[i], ft_strlen(argv[i]));
			dec = bintodec(argv[i]);
			printf("okay %d \n", dec);
		}
		//TODO o que fazer se estiver certo
		else
			printf("errado");
		//TODO o que feazer se estiver errado
		i++;
	}
}