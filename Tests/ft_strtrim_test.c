/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 20:01:05 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/12 21:35:42 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

int	main(int argc, char **argv)
{
	char *res;

	if (argc == 2)
	{
		res = ft_strtrim(argv[1]);
		if (!res)
			ft_putendl("ERROR IN MEMORY");
		else
			ft_putendl(res);
	}
	return (0);
}
