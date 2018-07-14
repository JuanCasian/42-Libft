/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 12:59:03 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 13:15:13 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	void	*dst;
	void	*src;
	size_t	n;
	char	*res;

	if (argc == 4)
	{
		dst = (void*)argv[1];
		src = (void*)argv[2];
		n = (size_t)ft_atoi(argv[3]);
		res = (char*)memcpy(dst, src, n);
		printf("Result from memcpy: \"%s\"\n", res);
		res = (char*)ft_memcpy(dst, src, n);
		printf("Result from ft_memcpy: \"%s\"\n", res);
	}
	res = "";
	dst = (void*)res;
	n = 0;
	src = (void*)res;
	return (0);
}
