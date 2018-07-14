/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 21:20:24 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 22:02:25 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

int	main(int argc, char **argv)
{
	char	*res;

	if (argc == 2)
	{
		res = ft_itoa(ft_atoi(argv[1]));
		ft_putendl(res);
	}
	return (0);
}
