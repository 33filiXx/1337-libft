/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <wel-mjiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:42:55 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/11/07 15:50:44 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	p;
	size_t			i;

	ptr = (unsigned char *)b;
	p = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		ptr[i] = p;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char	a[10] = {'\0'};
// 	char	x[10] = {'\0'};

// 	ft_memset(a, 'b', 11);
// 	// memset(x,'b',11);
// 	printf("%s\n", a);
// 	// printf("%s",x);
// }
