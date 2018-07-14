/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 13:36:15 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/10 13:43:56 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int a;

	if (argc == 2)
	{
		a = (int)ft_strlen(argv[1]);
		printf("Test text: \"%s\"\nString size: %i\n", argv[1], a);
	}
}
