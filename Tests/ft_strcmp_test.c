/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 13:57:47 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/10 14:05:41 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int a;

	if (argc == 3)
	{
		a = ft_strcmp(argv[1], argv[2]);
		printf("String #1: \"%s\"\n", argv[1]);
		printf("String #2: \"%s\"\nStrcmp result: %i\n", argv[2], a);
	}
	return (0);
}
