/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:08:06 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/10 15:21:02 by jcasian          ###   ########.fr       */
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
		a = (char)ft_toupper((int)argv[1][0]);
		printf("%c\t->\t%c\n", argv[1][0], a);
	}
	return (0);
}
