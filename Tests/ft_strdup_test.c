/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 19:40:04 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/10 19:40:07 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char *res;

	if (argc == 2)
	{
		res = ft_strdup(argv[1]);
		printf("Result: \"%s\"\n", res);
	}
	else
		res = "";
	return (0);
}
