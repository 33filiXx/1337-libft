/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <wel-mjiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:55:00 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/11/11 15:55:08 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s,0,n);
}
// int	main(void)
// {
// 	char a[10] = "walid";
// 	char z[10] = "walid";
// 	ft_bzero(a + 3, 0);
// 	// bzero(z + 3,0);
// 	printf("%s\n", a);
// 	// printf("%s" , z);
// }