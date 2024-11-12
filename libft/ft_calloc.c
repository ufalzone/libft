/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufalzone <ufalzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:14:37 by ufalzone          #+#    #+#             */
/*   Updated: 2024/11/12 21:01:52 by ufalzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	size_total;
	size_t	compteur;

	size_total = nmemb * size;
	if (nmemb && size && (size_total
			/ nmemb) != size)
		return (NULL);
	ptr = malloc(size_total);
	if (!ptr)
		return (NULL);
	compteur = 0;
	while (compteur < size_total)
	{
		((unsigned char *)ptr)[compteur] = 0;
		compteur++;
	}
	return (ptr);
}
