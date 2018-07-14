/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:43:21 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/10 15:49:32 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(void)
{
	printf("Testing: #3\tResult: %i\n", ft_isprint(3));
	printf("Testing: #8\tResult: %i\n", ft_isprint(8));
	printf("Testing: #23\tResult: %i\n", ft_isprint(23));
	printf("Testing: #29\tResult: %i\n", ft_isprint(29));
	printf("Testing: #32\tResult: %i\n", ft_isprint(32));
	printf("Testing: #48\tResult: %i\n", ft_isprint(48));
	printf("Testing: #54\tResult: %i\n", ft_isprint(54));
	printf("Testing: #67\tResult: %i\n", ft_isprint(67));
	printf("Testing: #85\tResult: %i\n", ft_isprint(85));
	printf("Testing: #99\tResult: %i\n", ft_isprint(99));
	printf("Testing: #126\tResult: %i\n", ft_isprint(126));
	printf("Testing: #127\tResult: %i\n", ft_isprint(127));
}
