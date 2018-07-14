/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 13:22:28 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 13:59:06 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	void	*dst;
	void	*src;
	char	*res;
	void	*dstft;
	size_t	n;

	if (argc == 6)
	{
		dst = (void*)argv[1];
		src = (void*)argv[2];
		dstft = (void*)argv[5];
		n = (size_t)ft_atoi(argv[4]);
		res = (char*)memccpy(dst, src, ft_atoi(argv[3]), n);
		printf("Results memccpy dst: \"%s\" res: \"%s\"\n", (char*)dst, res);
		res = (char*)ft_memccpy(dstft, src, ft_atoi(argv[3]), n);
		printf("Results ft dst: \"%s\" res: \"%s\"\n", (char*)dstft, res);
	}
	res = "";
	src = (void*)res;
	dst = (void*)res;
	dstft = (void*)res;
	n = 0;
	return (0);
}
