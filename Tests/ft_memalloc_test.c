/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 18:56:08 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 19:22:24 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

int	main(int argc, char **argv)
{
	size_t	size;
	char	*mem;
	size_t	i;

	size = 0;
	i = 0;
	if (argc == 2)
	{
		size = (size_t)ft_atoi(argv[1]);
		mem = (char*)ft_memalloc(size);
		size--;
		while (i < size)
		{
			mem[i] = 'a';
			i++;
		}
		mem[i] = '\0';
		ft_putstr(mem);
	}
	return (0);
}
