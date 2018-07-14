/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 15:28:19 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 15:37:23 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	void	*s;
	int		c;
	size_t	n;
	char	*res;

	if (argc == 4)
	{
		s = (void*)argv[1];
		c = ft_atoi(argv[2]);
		n = (size_t)ft_atoi(argv[3]);
		res = (char*)memchr(s, c, n);
		printf("Result for memchr: \"%s\"\n", res);
		res = (char*)ft_memchr(s, c, n);
		printf("Result for ft_memchr: \"%s\"\n", res);
	}
}
