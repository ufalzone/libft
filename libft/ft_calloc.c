/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufalzone <ufalzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:14:37 by ufalzone          #+#    #+#             */
/*   Updated: 2024/11/06 21:41:33 by ufalzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_calloc(size_t elementCount, size_t elementSize)
{
    void *ptr;
    size_t sizeTotal;
    size_t compteur;

    sizeTotal = elementCount * elementSize;
    if (elementCount && elementSize && (sizeTotal / elementCount) != elementSize)
        return (NULL);
    ptr = malloc(sizeTotal);
    if (!ptr)
        return NULL;
    compteur = 0;
    while (compteur < sizeTotal)
    {
        ((unsigned char *) ptr)[compteur] = 0;
        compteur++;
    }
    return (ptr);
}