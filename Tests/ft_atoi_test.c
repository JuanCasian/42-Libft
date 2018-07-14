/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 19:05:56 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 15:32:55 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <stdio.h>

int	main(void)
{
	printf("Str: \"       -1\"\t Number: %i\n", atoi("  -1"));
	printf("Str: \"   \t   Hello\"\t Number: %i\n", ft_atoi("   \t   Hello"));
	printf("Str: \"  \v \t +2452\"\t Number: %i\n", ft_atoi("  \v \t +2452"));
	printf("Str: \"456\"\t Number: %i\n", ft_atoi("456"));
	printf("Str: \"      -435524\"\t Number: %i\n", ft_atoi("      -435524"));
	return (0);
}
