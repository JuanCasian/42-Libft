/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_samplelist_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 18:47:36 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/13 18:51:39 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

int	main(int argc, char **argv)
{
	t_list	*mylist;

	if (argc == 2)
	{
		mylist = ft_samplelist((size_t)ft_atoi(argv[1]));
		ft_printlist(mylist);
	}
	return (0);
}
