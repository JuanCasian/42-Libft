/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 19:31:07 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/12 19:37:06 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

int	main(int argc, char **argv)
{
	size_t			len;
	unsigned int	start;
	char			*res;

	if (argc == 4)
	{
		start = (unsigned int)ft_atoi(argv[2]);
		len = (size_t)ft_atoi(argv[3]);
		res = ft_strsub(argv[1], start, len);
		ft_putendl(res);
	}
	return (0);
}
