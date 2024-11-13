/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <wel-mjiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:09:53 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/11/12 22:23:43 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}