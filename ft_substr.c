/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <wel-mjiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:38:07 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/11/12 15:41:35 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;
	size_t	k;

	i = 0;
	if (!s)
		return (0);
	k = ft_strlen(s);
	if (start >= k)
		return (ft_strdup(""));
	if (start + len > k)
	    len = (k - start);
	p = (char *)malloc((len * sizeof(char)) + 1);
	if (!p)
		return (NULL);
	while (i < len)
	{
		p[i] = s[i + (start)];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int	main(void)
// {
// 	char	*a;
// 	char	*p;

// 	a = "";
// 	p = ft_substr("abcde", 1, 5);
// 	printf("%s", p);
// }
