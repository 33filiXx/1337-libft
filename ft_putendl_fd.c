/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <wel-mjiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:34:16 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/11/13 03:37:57 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_putendl_fd(char *s, int fd)
{
    ft_putstr_fd(s,fd);
    write(fd,"\n",1);
}

// int main()
// {
//     ft_putendl_fd("walid",1);
    
// }