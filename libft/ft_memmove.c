/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufalzone <ufalzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 00:11:43 by ufalzone          #+#    #+#             */
/*   Updated: 2024/11/12 20:57:41 by ufalzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)destination;
	s = (unsigned char *)source;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (destination);
}
