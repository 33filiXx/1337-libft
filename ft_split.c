/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <wel-mjiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:36:09 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/11/12 21:22:59 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_checklenght(const char *s , char sep , int *j)
{	
	int 	i;
	char	*p;
	int k;

	k = *j;
	i = 0;
	while (s[k] == sep && s[k])
		k++;
	while (s[i + k] && s[i + k] != sep)
		i++;
	p = (char *)malloc((i + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while (s[k] && s[k] != sep)
	{
		p[i] = s[k];
		i++;
		k++;
	}
	p[i] = '\0';
	*j = k;	
	return (p);
}

int	ft_countword(char const *str, char c)
{
	int	i;
	int	count;
	int	check;

	i = 0;
	count = 0;
	check = 1;
	while (str[i])
	{
		if (str[i] != c && check == 1)
		{
			count++;
			check = 0; 
		}
		else if (str[i] == c)
			check = 1;
		i++;
	}
	 
	return (count);
}

void	ft_free(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	ptr = NULL;
}
char	**ft_split(char const *s, char c)
{
	char	**splitted;
	int		k;
	int		count;
	int		check;

	if (!s)
		return NULL;
	count = ft_countword(s, c);
	splitted = (char **)malloc((count + 1) * sizeof(char *));
	if (!splitted)
		return (NULL);
	k = 0;
	check = 0;
	while (k < count)
	{
		splitted[k] = ft_checklenght(s,c,&check);
		if (!splitted[k])
		{
			ft_free (splitted);
			return (NULL);
		}
		k++;
	}
	splitted[k] = NULL;
	return (splitted);
}




// int	main(void)
// {
// // 	char	a[100] = "s efegeg4hg4  t4h2h4h2   35j7j767 ";
// 	char	**p;
//  	int		i;
	
//  	p = ft_split("                f       ", '');
// 	//printf("p = %s\n", p[i]);
// 	if (!p)
// 		return 1;
// 	i = 0;
// 	while (p[i])
// 	{
// 	printf("%s\n", p[i]);
//  	i++;
// 	}
// 	i = 0;
// 	while(p[i])
// 	{
// 		free(p[i]);
// 		i++;
// 	}
// 	free(p);
// }