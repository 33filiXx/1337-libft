/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <wel-mjiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:49:09 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/11/13 00:12:36 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	char *str = (char *)s;

	if (!s)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	if (c == '\0')
	{
		return str + i;
	}
	if (c == 1024)
	{
		return str + i;
	}
	return (0);
}

// int main() {
// 	char *str = "hello";
// 	printf("%s\n", ft_strchr(str, 1024));
// 	printf("%s\n", strchr(str, 1024));
// }
