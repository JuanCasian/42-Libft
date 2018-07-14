/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:32:37 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/10 16:33:23 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(void)
{
	printf("Checking the char: \"A\"\tResult: %i\n", ft_isalpha(65));
	printf("Checking the char: \"d\"\tResult: %i\n", ft_isalpha(100));
	printf("Checking the char: \"*\"\tResult: %i\n", ft_isalpha(42));
	printf("Checking the char: \"2\"\tResult: %i\n", ft_isalpha(50));
	printf("Checking the char: \"9\"\tResult: %i\n", ft_isalpha(57));
	printf("Checking the char: \"}\"\tResult: %i\n", ft_isalpha(125));
	printf("Checking the char: \"\\\"\tResult: %i\n", ft_isalpha(92));
	printf("Checking the char: \":\"\tResult: %i\n", ft_isalpha(58));
	printf("Checking the char: \"z\"\tResult: %i\n", ft_isalpha(122));
	printf("Checking the char: \"0\"\tResult: %i\n", ft_isalpha(48));
	printf("Checking the #: \"127\"\tResult: %i\n", ft_isalpha(127));
	printf("Checking the #: \"5\"\tResult: %i\n", ft_isalpha(5));
	printf("Checking the #: \"30\"\tResult: %i\n", ft_isalpha(30));
	printf("Checking the #: \"33\"\tResult: %i\n", ft_isalpha(33));
	printf("Checking the #: \"126\"\tResult: %i\n", ft_isalpha(126));
}
