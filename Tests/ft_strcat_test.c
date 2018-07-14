/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 20:25:43 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/10 20:28:08 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char *res;

	if (argc == 3)
	{
		res = ft_strcat(argv[1], argv[2]);
		printf("Result: \"%s\"\n", res);
	}
	else
		res = "";
	return (0);
}
