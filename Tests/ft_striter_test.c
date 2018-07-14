/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 15:36:55 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/12 15:47:11 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

void	my_toupper(char *cad)
{
	if (*cad >= 'a' && *cad <= 'z')
	{
		*cad = *cad - 32;
	}
}

int		main(int argc, char **argv)
{
	char *str;
	void (*f)(char*);

	f = my_toupper;
	if (argc == 2)
	{
		str = ft_strnew(ft_strlen(argv[1]));
		str = ft_strcpy(str, argv[1]);
		ft_striter(str, f);
		ft_putendl(str);
	}
	return (0);
}
