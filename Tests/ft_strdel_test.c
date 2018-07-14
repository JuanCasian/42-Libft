/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 20:07:04 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 20:13:47 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

int	main(int argc, char **argv)
{
	char *str;

	if (argc == 2)
	{
		str = ft_strnew((size_t)ft_strlen(argv[1]));
		str = ft_strcpy(str, argv[1]);
		ft_putendl(str);
		ft_putendl("Deleteing...");
		ft_strdel(&str);
		if (str == NULL)
			ft_putendl("Deleted");
		else
			ft_putendl("Didnt work");
	}
	return (0);
}
