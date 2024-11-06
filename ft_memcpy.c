/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufalzone <ufalzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 01:21:53 by ufalzone          #+#    #+#             */
/*   Updated: 2024/10/23 01:30:15 by ufalzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    size_t  i;
    unsigned char *d;
    unsigned char *s;

    i = 0;
    d = (unsigned char *) dest;
    s = (unsigned char *) src;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}