/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <wel-mjiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:50:05 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/11/07 15:41:48 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	r;
	int	s;

	i = 0;
	r = 0;
	s = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			s *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		// if (r >= 9223372036854775807 && s == 1)
		// 	return (-1);
		// else if (r >= 9223372036854775807 && s == -1)
		// 	return (0);
		i++;
	}
	return (r * s);
}

// int	main(void)
// {
// 	char a[100] = "-922477545810";

// 	printf("%d\n", ft_atoi(a));
// 	printf("%d\n", atoi(a));
// 	printf("%d", strtol(a, NULL, 10));
// }