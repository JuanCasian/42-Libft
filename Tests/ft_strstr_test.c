/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 21:08:56 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/10 21:16:02 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char *res;

	if (argc == 3)
	{
		res = ft_strstr(argv[1], argv[2]);
		if (res == NULL)
		{
			printf("Not found\n");
		}
		else
		{
			printf("Result: \"%s\"\n", res);
		}
	}
	res = "";
	return (0);
}
