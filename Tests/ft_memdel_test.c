/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 19:32:19 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 19:43:30 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

int	main(int argc, char **argv)
{
	char	*res;
	size_t	i;

	i = 0;
	if (argc == 2)
	{
		res = (char*)ft_memalloc((size_t)ft_strlen(argv[1]));
		while (i < ft_strlen(argv[1]))
		{
			res[i] = argv[1][i];
			i++;
		}
		res[i] = '\0';
		ft_putendl(res);
		ft_memdel((void**)&res);
		if (!res)
		{
			ft_putendl("NO EXISTE");
		}
	}
	return (0);
}
