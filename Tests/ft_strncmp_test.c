/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 19:54:01 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/10 19:57:45 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int a;

	if (argc == 4)
	{
		a = ft_strncmp(argv[1], argv[2], ft_atoi(argv[3]));
		printf("String #1: \"%s\"\n", argv[1]);
		printf("String #2: \"%s\"\nStrcmp result: %i\n", argv[2], a);
		printf("Number of chars compared: %i\n", ft_atoi(argv[3]));
	}
	return (0);
}
