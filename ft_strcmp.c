/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufalzone <ufalzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:54:40 by ufalzone          #+#    #+#             */
/*   Updated: 2024/10/22 23:05:40 by ufalzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(const char * s1, const char * s2)
{
    int i;
    
    i = 0;
    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}
