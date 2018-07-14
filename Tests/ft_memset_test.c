/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 12:43:29 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 12:50:29 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*res;
	size_t	len;

	if (argc == 4)
	{
		len = (size_t)ft_atoi(argv[3]);
		res = (char*)memset((void*)argv[1], ft_atoi(argv[2]), len);
		printf("Result memset: \"%s\"\n", res);
		res = (char*)ft_memset((void*)argv[1], ft_atoi(argv[2]), len);
		printf("Result ft_memset: \"%s\"\n", res);
	}
	res = "";
	len = 0;
	return (0);
}
