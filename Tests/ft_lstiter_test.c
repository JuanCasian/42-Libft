/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 20:11:09 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/13 20:20:03 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

char	*str_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - 32);
		i++;
	}
	return (str);
}

void	elem_handler(t_list *elem)
{
	elem->content = (void*)str_toupper((char*)elem->content);
}

int		main(int argc, char **argv)
{
	t_list	*mylist;
	void	(*f)(t_list *elem);

	if (argc == 2)
	{
		f = elem_handler;
		mylist = ft_samplelist(ft_atoi(argv[1]));
		ft_putendl("BEFORE FUNCTION");
		ft_printlist(mylist);
		ft_lstiter(mylist, f);
		ft_putendl("AFTER FUNCTION");
		ft_printlist(mylist);
	}
	return (0);
}
