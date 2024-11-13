/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <wel-mjiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:30:05 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/11/11 18:32:40 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t ft_strlen(const char *s)
// {
//     size_t i;

//     i = 0;
//     while(s[i])
//     {
//         i++;
//     }
//     return (i);
// }
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*ptr;
	size_t	i;
	size_t	j;
	size_t	p1;
	size_t	p2;

	ptr = (char *)src;
	i = 0;
	j = 0;
	p1 = ft_strlen(dst);
	p2 = ft_strlen(src);
	if (size == 0 || dst == '\0')
		return (p2);
	if (size < p1)
		return (size + p2);
	while (dst[i])
	{
		i++;
	}
	while (ptr[j] && i < size - 1)
	{
		dst[i] = ptr[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (p1 + p2);
}

// int main()
// {
// 	char a[50] = "\0";
// 	char b[50] = "\0";
	
// 	printf("%zu\n%s\n" , strlcat(a,"   elmjiyad",15),a);
// 	printf("%zu\n%s\n" , ft_strlcat(b,"   elmjiyad",15),b);
	
// }
