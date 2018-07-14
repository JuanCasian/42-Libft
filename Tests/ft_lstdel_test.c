/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 19:20:01 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/13 20:00:19 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

void	delete_f(void *content, size_t content_size)
{
	free(content);
	content = NULL;
	content_size = 0;
}

int		main(int argc, char **argv)
{
	t_list	*my_list;
	void	(*del)(void*, size_t);

	del = delete_f;
	if (argc == 2)
	{
		my_list = ft_samplelist((size_t)ft_atoi(argv[1]));
		ft_putendl("Printing list BEFORE");
		ft_printlist(my_list);
		ft_lstdel(&my_list, del);
		ft_putendl("Printing list AFTER ft_lstdel");
		if (my_list)
			ft_printlist(my_list);
		else
			ft_putendl("No list to print");
	}
	return (0);
}
