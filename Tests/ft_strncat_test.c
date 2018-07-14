/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 20:40:08 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/10 20:42:24 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char *res;

	if (argc == 4)
	{
		res = ft_strncat(argv[1], argv[2], ft_atoi(argv[3]));
		printf("Result: \"%s\"\n", res);
	}
	else
		res = "";
	return (0);
}
