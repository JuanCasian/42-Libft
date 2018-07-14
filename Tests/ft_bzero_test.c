/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 12:07:42 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 12:16:06 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*res;
	size_t	len;

	len = 0;
	if (argc == 3)
	{
		res = (void*)argv[1];
		len = (size_t)ft_atoi(argv[2]);
		ft_bzero(res, len);
		printf("Result: \"%s\"", (char*)res);
	}
	res = NULL;
	return (0);
}
