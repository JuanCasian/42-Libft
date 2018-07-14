/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_space_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:44:20 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/12 21:48:28 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"

int	main(void)
{
	char a;
	char b;

	a = ' ';
	b = 'd';
	ft_putchar(a);
	ft_putstr(" is a space? ");
	if (ft_is_space(a))
		ft_putendl("YES");
	else
		ft_putendl("NO");
	ft_putchar(b);
	ft_putstr(" is a space? ");
	if (ft_is_space(b))
		ft_putendl("YES");
	else
		ft_putendl("NO");
	return (0);
}
