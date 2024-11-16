/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufalzone <ufalzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 03:23:39 by ufalzone          #+#    #+#             */
/*   Updated: 2024/11/15 17:04:56 by ufalzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *nw)
{
	t_list	*temp;

	temp = *lst;
	if (*lst == NULL)
	{
		(*lst) = nw;
		return ;
	}
	while (temp->next)
		temp = temp->next;
	temp->next = nw;
}
