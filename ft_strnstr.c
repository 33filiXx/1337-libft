/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <wel-mjiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:26:27 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/11/13 03:50:00 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if(!haystack || !needle)
        return NULL;
    if(*needle == '\0')
        return (char *)haystack;
    if(len <= 0)
        return NULL;
    while (haystack[i] &&  i < len)
    {
        j = 0;
        while (haystack[j + i] == needle[j] && needle[j] && i + j < len)
        {
            j++;
        }
        if (needle[j] == '\0')
        {
            return (char *)(haystack + i);
        }
        i++;
    }
    return NULL;
}


// int main()
// {
//     char *a = "see FF your FF return FF now FF";
//     char *b = "FF";
//     printf("%s\n" ,ft_strnstr("empty","x", -1));
//     printf("%s" ,strnstr("empty","x", -1));
// }