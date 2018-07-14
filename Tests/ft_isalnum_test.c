/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:12:24 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/10 16:22:07 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(void)
{
	printf("Checking the char: \"A\"\tResult: %i\n", ft_isalnum(65));
	printf("Checking the char: \"d\"\tResult: %i\n", ft_isalnum(100));
	printf("Checking the char: \"*\"\tResult: %i\n", ft_isalnum(42));
	printf("Checking the char: \"2\"\tResult: %i\n", ft_isalnum(50));
	printf("Checking the char: \"9\"\tResult: %i\n", ft_isalnum(57));
	printf("Checking the char: \"}\"\tResult: %i\n", ft_isalnum(125));
	printf("Checking the char: \"\\\"\tResult: %i\n", ft_isalnum(92));
	printf("Checking the char: \":\"\tResult: %i\n", ft_isalnum(58));
	printf("Checking the char: \"z\"\tResult: %i\n", ft_isalnum(122));
	printf("Checking the char: \"0\"\tResult: %i\n", ft_isalnum(48));
	printf("Checking the #: \"127\"\tResult: %i\n", ft_isalnum(127));
	printf("Checking the #: \"5\"\tResult: %i\n", ft_isalnum(5));
	printf("Checking the #: \"30\"\tResult: %i\n", ft_isalnum(30));
	printf("Checking the #: \"33\"\tResult: %i\n", ft_isalnum(33));
	printf("Checking the #: \"126\"\tResult: %i\n", ft_isalnum(126));
}
