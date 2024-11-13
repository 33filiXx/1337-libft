/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <wel-mjiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:31:18 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/11/13 00:51:42 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*sourc;
	size_t	i;

	dest = (char *)dst;
	sourc = (char *)src;
	i = 0;
	if (dest > sourc)
	{
		while (len--)
		{
			dest[len] = sourc[len];
		}
	}
	else
	{
		while (i < len)
		{
			dest[i] = sourc[i];
			i++;
		}
	}
	return (dst);
}
// int	main(void)
// {
// 	char *a = NULL;
// 	char *b = NULL;
// 	ft_memmove(a, a, 2);
// 	memmove(b, b, 2);
// 	//printf("%s\n", a);
// 	printf("%s", b);
// }