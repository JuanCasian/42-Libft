/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 16:33:35 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 16:42:51 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*dst;
	char	*dstft;
	char	*src;
	size_t	dst_size;
	size_t	res;

	if (argc == 4)
	{
		dst = argv[1];
		dstft = argv[2];
		src = argv[3];
		dst_size = (size_t)ft_strlen(dst);
		res = strlcat(dst, src, dst_size);
		printf("Result strlcat dst: \"%s\"  res: \"%i\"\n", dst, (int)res);
		res = ft_strlcat(dstft, src, dst_size);
		printf("Result ft_strlcat dst: \"%s\"  res: \"%i\"\n", dstft, (int)res);
	}
	return (0);
}
