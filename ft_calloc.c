/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <wel-mjiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:28:20 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/11/07 16:12:00 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int 	total_size;
	char	*p;

	total_size = nmemb * size;
	p = (char *)malloc(total_size);
	if (!p)
		return (NULL);
	if (nmemb == 0 || size == 0)
		total_size = 1;
	return ft_memset(p, 0, total_size);
}
// int	main(void)
// {
// 	// char *ptr = calloc(0, 0);
// 	// printf("%d\n", ptr[0]);
// 	// int	i;
// 	// int	*p;
// 	// int	*p1;

// 	// i = 0;
// 	// p = (int *)ft_calloc(10, sizeof(int));
// 	// p1 = (int *)calloc(10, sizeof(int));
// 	// while (i < 10)
// 	// {
// 	// 	printf("%d", p1[i]);
// 	// 	printf("%d", p[i]);
// 	// 	i++;
// 	// }
// }
