/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufalzone <ufalzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:43:29 by ufalzone          #+#    #+#             */
/*   Updated: 2024/10/22 22:53:12 by ufalzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(const char *source)
{
    int i;
    char *dest;

    i = 0;
    while(source[i])
        i++;    
    dest = malloc(sizeof(char) * (i + 1));
    if (!dest)
        return NULL;
    i = 0;
    while(source[i])
    {
        dest[i] = source[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
