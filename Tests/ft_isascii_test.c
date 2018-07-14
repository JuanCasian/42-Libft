/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:02:00 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/10 16:04:22 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(void)
{
	printf("Testing: #-1\tResult: %i\n", ft_isascii(-1));
	printf("Testing: #-8\tResult: %i\n", ft_isascii(-8));
	printf("Testing: #-23\tResult: %i\n", ft_isascii(-23));
	printf("Testing: #29\tResult: %i\n", ft_isascii(29));
	printf("Testing: #32\tResult: %i\n", ft_isascii(32));
	printf("Testing: #48\tResult: %i\n", ft_isascii(48));
	printf("Testing: #54\tResult: %i\n", ft_isascii(54));
	printf("Testing: #67\tResult: %i\n", ft_isascii(67));
	printf("Testing: #0\tResult: %i\n", ft_isascii(0));
	printf("Testing: #500\tResult: %i\n", ft_isascii(500));
	printf("Testing: #128\tResult: %i\n", ft_isascii(128));
	printf("Testing: #127\tResult: %i\n", ft_isascii(127));
}
