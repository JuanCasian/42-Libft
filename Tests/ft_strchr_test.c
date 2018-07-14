/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 16:02:34 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 16:07:03 by jcasian          ###   ########.fr       */
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
		res = strchr(argv[1], c);
		printf("Result in strchr: \"%s\"\n", res);
		res = ft_strchr(argv[1], c);
		printf("Result in ft_strchr: \"%s\"\n", res);
	}
	res = "";
	c = 0;
	return (0);
}
