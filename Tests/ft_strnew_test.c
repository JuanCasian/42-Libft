/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 19:50:04 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 20:13:34 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

int	main(int argc, char **argv)
{
	char *str;

	if (argc == 2)
	{
		str = ft_strnew(ft_strlen(argv[1]));
		if (str == NULL)
			ft_putendl("NOT EXISTING");
		else
		{
			str = ft_strcpy(str, argv[1]);
			ft_putendl(str);
		}
	}
	return (0);
}
