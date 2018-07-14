/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 17:34:01 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/13 19:59:35 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

void	hello_str(void *content, size_t content_size)
{
	free(content);
	content = NULL;
	content_size = 0;
}

int		main(int argc, char **argv)
{
	void	*content;
	t_list	*res;
	size_t	content_size;
	void	(*f)(void*, size_t);

	f = hello_str;
	if (argc == 2)
	{
		content = (void*)ft_strinit(argv[1]);
		content_size = sizeof(argv[1]);
		res = ft_lstnew(content, content_size);
		ft_lstdelone(&res, f);
		if (res)
		{
			ft_putendl((char*)res->content);
			ft_putendl(ft_itoa((int)res->content_size));
		}
		else
			ft_putendl("Returned NULL value");
	}
}
