/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufalzone <ufalzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:26:18 by ufalzone          #+#    #+#             */
/*   Updated: 2024/10/22 18:26:30 by ufalzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(char c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}
