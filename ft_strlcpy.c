/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <wel-mjiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:47:44 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/11/11 17:52:37 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size > 0)
	{	
		while (src[i] && j < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
// int	main(void)
// {
// 	char *a = NULL;

// 	char d[30];
// 	char m[30];
//printf(" lenght %zu\n  %s\n" , ft_strlcpy(d, "lorem ipsum dolor sit amet", 0),d);
//printf(" lenght %zu\n  , %s", strlcpy(m, "lorem ipsum dolor sit amet", 0) , m);
	
// }