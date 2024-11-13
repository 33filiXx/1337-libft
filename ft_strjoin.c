/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <wel-mjiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:23:34 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/11/11 15:29:18 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char const *s1, char const *s2, char *dest)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		dest[i] = s2[j];
		j++;
		i++;
	}
	
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		ls2;
	int		ls1;
	char	*p;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	if (!s1 && !s2)
	{
		p = (char *)malloc(1);
		p[0] = '\0';
		return (0);
	}
	else
		p = (char *)malloc((ls1 + ls2 + 1) * sizeof(char));
	if (!p)
		return (0);
	return (ft_strcat(s1, s2, p));
}

// int	main(void)
// {
// 	char a[10] = "walid";
// 	char b[10] = "elmjiyad";
// 	printf("%s", ft_strjoin(a, b));
// }