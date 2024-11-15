/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <wel-mjiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:25:24 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/11/12 14:48:47 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return 0;
	while (p1[i] == p2[i] && i < n - 1 && (p1[i] || p2[i]))
	{
		i++;
	}
	return (p1[i] - p2[i]);
}

// int	main(void)
// {
// 	const char  *a = "walie";
// 	const char *b = "walia";
// 	printf("%d", ft_strncmp("abcdefgh", "", 1));
// 	//printf("%d", strncmp(a, b, 5));
// }