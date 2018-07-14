/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 14:17:53 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 15:19:54 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	void	*dst;
	void	*dstft;
	void	*src;
	char	*res;

	if (argc == 5)
	{
		dst = (void*)argv[1];
		dstft = (void*)argv[2];
		src = (void*)argv[3];
		res = (char*)memmove(dst, src, (size_t)ft_atoi(argv[4]));
		printf("Result form memmove: \"%s\"\n", res);
		res = (char*)memmove(dstft, src, (size_t)ft_atoi(argv[4]));
		printf("Result form ft_memmove: \"%s\"\n", res);
	}
	res = "";
	dst = (void*)res;
	dstft = (void*)res;
	src = (void*)res;
	return (0);
}
