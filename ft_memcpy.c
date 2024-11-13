/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <wel-mjiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:10:24 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/11/07 15:28:21 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*dest;
	char	*source;
	size_t	i;

	dest = (char *)dst;
	source = (char *)src;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char a[10] = "walid";
// 	char b[10] = "walid";
// 	ft_memcpy(a + 1, a, 4);
// 	memcpy(b + 1, b, 4);
// 	printf("%s\n", a);
// 	printf("%s", a);
// }