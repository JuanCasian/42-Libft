/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 13:39:46 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/13 14:12:15 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

int	main(int argc, char **argv)
{
	char	**res;
	int		i;

	i = 0;
	if (argc == 3)
	{
		res = ft_strsplit(argv[1], argv[2][0]);
		while (res[i])
		{
			ft_putendl(res[i]);
			i++;
		}
	}
	return (0);
}
