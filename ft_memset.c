/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufalzone <ufalzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 01:00:03 by ufalzone          #+#    #+#             */
/*   Updated: 2024/10/23 01:13:18 by ufalzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_memset(void *ptr, int value, size_t num)
{
    size_t  i;
    unsigned char   *p;

    p = (unsigned char *) ptr;

    i = 0;
    while (num > i)
    {
        p[i] = (unsigned char) value;
        i++;
    }
    return (ptr);
}
