/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 18:39:33 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 18:42:12 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putnbr(ft_atoi(argv[i]));
		ft_putchar('\n');
		i++;
	}
	return (0);
}
