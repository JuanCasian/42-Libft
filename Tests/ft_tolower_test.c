/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:29:05 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/10 15:29:09 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int a;

	a = 0;
	if (argc == 2)
	{
		a = (char)ft_tolower((int)argv[1][0]);
		printf("%c\t->\t%c\n", argv[1][0], a);
	}
	return (0);
}
