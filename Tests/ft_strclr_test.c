/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 20:18:13 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 20:22:34 by jcasian          ###   ########.fr       */
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
		ft_putendl("Clearing string");
		ft_strclr(str);
		if (!str[0])
			ft_putendl("It worked!");
		else
			ft_putendl(str);
	}
	return (0);
}
