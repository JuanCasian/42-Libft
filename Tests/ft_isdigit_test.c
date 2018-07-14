/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:27:13 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/12 16:52:29 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int i;

	i = -300;
	while (i < 300)
	{
		if (isdigit(i) != ft_isdigit(i))
		{
			printf("Test failed in #%i\n", i);
			printf("Your value: %i\n", ft_isdigit(i));
			printf("isdigit value: %i\n", isdigit(i));
		}
		i++;
	}
	return (1);
}
