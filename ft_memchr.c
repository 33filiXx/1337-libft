/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <wel-mjiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:49:43 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/11/13 02:53:40 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	p;
	size_t			i;

	ptr = (unsigned char *)s;
	p = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == p)
		{
			return (&ptr[i]);
		}
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	char a[10] = "walid";
// 	char x[10] = "walid";
// 	printf("%s\n", ft_memcmp("teste", "teste", 0));
// 	printf("%s", ft_memcmp("teste", "teste", 0));
// }