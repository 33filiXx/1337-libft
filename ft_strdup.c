/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <wel-mjiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:24:56 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/11/12 23:19:29 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*p;

	i = 0;
	while (s[i])
	{
		i++;
	}
	p = (char *)malloc((i + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while (s[i])
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int	main(void)
// {
// 	char *v = ft_strdup("hamido dip walid");
// 	printf("%s", v);
// }