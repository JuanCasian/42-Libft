/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 15:51:29 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 15:54:41 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	void	*s1;
	void	*s2;
	size_t	n;
	int		res;
	char	*tmp;

	if (argc == 4)
	{
		s1 = (void*)argv[1];
		s2 = (void*)argv[2];
		n = (size_t)ft_atoi(argv[3]);
		res = memcmp(s1, s2, n);
		printf("Result for memcmp: \"%i\"\n", res);
		res = memcmp(s1, s2, n);
		printf("Result for memcmp: \"%i\"\n", res);
	}
	tmp = "";
	s1 = (void*)tmp;
	s2 = (void*)tmp;
	n = 0;
	res = 0;
	return (0);
}
