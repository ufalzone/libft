/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufalzone <ufalzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 01:30:51 by ufalzone          #+#    #+#             */
/*   Updated: 2024/10/23 01:41:27 by ufalzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_memmcpy(void *restrict dest, const void *restrict src, int c, size_t n)
{
    size_t  i;
    unsigned char *d;
    const unsigned char *s;

    i = 0;
    d = (unsigned char *) dest;
    s = (const unsigned char *) src;
    while (i < n)
    {
        d[i] = s[i];
        if (s[i] == (unsigned char) c)
            return (&d[i + 1]);
        i++;
    }
    return (NULL);
}