/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 18:39:00 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/12 19:07:17 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (ft_strequ(argv[1], argv[2]) == 1)
			ft_putendl("Identical");
		else
			ft_putendl("Not Identical");
	}
	return (0);
}
