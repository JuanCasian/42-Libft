/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 21:32:09 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/10 21:44:18 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char *res;

	if (argc == 4)
	{
		res = ft_strnstr(argv[1], argv[2], (size_t)ft_atoi(argv[3]));
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
