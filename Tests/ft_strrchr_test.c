/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 16:17:24 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 16:17:40 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		c;
	char	*res;

	if (argc == 3)
	{
		c = ft_atoi(argv[2]);
		res = strrchr(argv[1], c);
		printf("Result in strrchr: \"%s\"\n", res);
		res = ft_strrchr(argv[1], c);
		printf("Result in ft_strrchr: \"%s\"\n", res);
	}
	res = "";
	c = 0;
	return (0);
}
