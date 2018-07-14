/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 19:18:46 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/12 19:21:14 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

int	main(int argc, char **argv)
{
	size_t n;

	if (argc == 4)
	{
		n = (size_t)ft_atoi(argv[3]);
		if (ft_strnequ(argv[1], argv[2], n) == 1)
			ft_putendl("Identical");
		else
			ft_putendl("Not Identical");
	}
	return (0);
}
