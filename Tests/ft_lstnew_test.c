/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 16:05:57 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/13 17:15:15 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

int	main(int argc, char **argv)
{
	void	*content;
	t_list	*res;
	size_t	content_size;

	if (argc == 3)
	{
		content = (void*)ft_strinit(argv[1]);
		content_size = (size_t)ft_atoi(argv[2]);
		res = ft_lstnew(content, content_size);
		if (res)
		{
			ft_putendl((char*)res->content);
			ft_putendl(ft_itoa((int)res->content_size));
		}
		else
			ft_putendl("Returned NULL value");
	}
}
