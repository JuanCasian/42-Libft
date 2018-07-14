/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 18:24:23 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/12 18:30:26 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

char	toupper_even(unsigned int n, char c)
{
	if ((n % 2 == 1) && (c >= 'a' && c <= 'z'))
		return (c - 32);
	return (c);
}

int		main(int argc, char **argv)
{
	char	*res;
	char	(*f)(unsigned int, char);

	f = toupper_even;
	if (argc == 2)
	{
		res = ft_strmapi(argv[1], f);
		ft_putendl(res);
	}
	return (0);
}
