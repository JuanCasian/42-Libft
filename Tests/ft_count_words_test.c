/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:35:56 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/12 21:43:49 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

int	main(int argc, char **argv)
{
	char *res;

	if (argc == 2)
	{
		res = ft_itoa(ft_count_words(argv[1]));
		ft_putstr("Number of words: ");
		ft_putendl(res);
	}
	return (0);
}
