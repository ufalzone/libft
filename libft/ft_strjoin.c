/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufalzone <ufalzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:48:16 by ufalzone          #+#    #+#             */
/*   Updated: 2024/11/12 14:34:17 by ufalzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int     size_total;
    char    *resultat;

    size_total = (ft_strlen(s1) + ft_strlen(s2));
    resultat = malloc(sizeof(char) * (size_total + 1));
    if (!resultat)
        return (NULL);
    ft_strcpy(resultat, s1);
    ft_strcat(resultat, s2);
    return (resultat);
}

#include <stdio.h>

void test_ft_strjoin()
{
    char *result;

    // Test 1
    result = ft_strjoin("Hello, ", "world!");
    if (result && ft_strcmp(result, "Hello, world!") == 0)
        printf("Test 1 passed\n");
    else
        printf("Test 1 failed\n");
    free(result);

    // Test 2
    result = ft_strjoin("", "world!");
    if (result && ft_strcmp(result, "world!") == 0)
        printf("Test 2 passed\n");
    else
        printf("Test 2 failed\n");
    free(result);

    // Test 3
    result = ft_strjoin("Hello, ", "");
    if (result && ft_strcmp(result, "Hello, ") == 0)
        printf("Test 3 passed\n");
    else
        printf("Test 3 failed\n");
    free(result);

    // Test 4
    result = ft_strjoin("", "");
    if (result && ft_strcmp(result, "") == 0)
        printf("Test 4 passed\n");
    else
        printf("Test 4 failed\n");
    free(result);
}

int main()
{
    test_ft_strjoin();
    return 0;
}
