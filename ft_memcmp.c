/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <wel-mjiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:23:05 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/11/13 00:32:13 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	if(n == 0)
		return 0;
	while (((ptr1[i] || ptr2[i]) || i < n  - 1) && ptr1[i] == ptr2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (ptr1[i] - ptr2[i]);
}

// int	main(void)
// {
// 	char a[10] = "waaid";
// 	char b[10] = "walid";

// 	printf("%d\n", memcmp(a, b, 0));
// 	printf("%d", ft_memcmp(a, b, 0));
// }