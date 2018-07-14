/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 19:26:37 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/10 19:32:07 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char *res;

	if (argc == 3)
	{
		res = ft_strcpy(argv[1], argv[2]);
		printf("Result: \"%s\"\n", res);
	}
	else
		res = "";
	return (0);
}
