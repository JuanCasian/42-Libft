/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 15:07:34 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/13 15:12:03 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

int	main(int argc, char **argv)
{
	char *res;
	char *str;

	if (argc == 2)
	{
		str = ft_strinit(argv[1]);
		res = ft_strrev(str);
		ft_putstr("Result: ");
		ft_putendl(str);
	}
	return (0);
}
