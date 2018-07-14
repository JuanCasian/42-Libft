/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 18:11:06 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/12 18:14:46 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

char	char_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int		main(int argc, char **argv)
{
	char	*res;
	char	(*f)(char);

	f = char_toupper;
	if (argc == 2)
	{
		res = ft_strmap(argv[1], f);
		ft_putendl(res);
	}
	return (0);
}
