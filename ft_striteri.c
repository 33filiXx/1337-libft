/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <wel-mjiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 04:11:23 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/11/11 15:49:33 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void f(unsigned int i , char *a)
{
    if (i == 3)
        *a -= 32;
}

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    unsigned  i;

    i = 0;
    if (f && s)
    {
    while (s[i])
    {
    f(i , &s[i]);
    i++;    
    }
    }
}

// int main()
// {
//     char a[10] = "walid";
//     void (*p)(unsigned int,char*);
//     p = f;
//     ft_striteri(a, p);
//     printf("%s",a);
    
// }