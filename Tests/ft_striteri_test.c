/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 16:55:22 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/12 18:03:42 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

void	ft_change_even(unsigned int n, char *s)
{
	if (n % 2 == 0)
	{
		*s = (char)ft_toupper((int)*s);
	}
}

int		main(int argc, char **argv)
{
	char	*str;
	void	(*f)(unsigned int, char*);

	f = ft_change_even;
	if (argc == 2)
	{
		str = ft_strinit(argv[1]);
		ft_striteri(str, f);
		ft_putendl(str);
	}
	return (0);
}
