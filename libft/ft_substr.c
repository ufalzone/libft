/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufalzone <ufalzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:55:28 by ufalzone          #+#    #+#             */
/*   Updated: 2024/11/12 14:34:25 by ufalzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    unsigned int i;

    if (ft_strlen(s) < (size_t) start)
        return (NULL);
    i = 0;
    str = malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    while (i < len)
    {
        str[i] = s[start + i];
        i ++;
    }
    str[i] = '\0';
    return (str);
}

// // test_ft_substr.c
// #include <stdio.h>
// #include <string.h>

// void test_ft_substr() {
//     // Test 1: Sous-chaîne au début
//     char str1[] = "Hello World";
//     char *substr1 = ft_substr(str1, 0, 5);
//     printf("Test 1: %s\n", strcmp(substr1, "Hello") == 0 ? "Passé" : "Échoué");
//     free(substr1);

//     // Test 2: Sous-chaîne au milieu
//     char *substr2 = ft_substr(str1, 6, 5);
//     printf("Test 2: %s\n", strcmp(substr2, "World") == 0 ? "Passé" : "Échoué");
//     free(substr2);

//     // Test 3: Sous-chaîne avec longueur plus grande que la chaîne restante
//     char *substr3 = ft_substr(str1, 6, 10);
//     printf("Test 3: %s\n", strcmp(substr3, "World") == 0 ? "Passé" : "Échoué");
//     free(substr3);

//     // Test 4: Sous-chaîne avec start plus grand que la longueur de la chaîne
//     char *substr4 = ft_substr(str1, 20, 5);
//     printf("Test 4: %s\n", substr4 == NULL ? "Passé" : "Échoué");
//     free(substr4);

//     // Test 5: Sous-chaîne avec longueur 0
//     char *substr5 = ft_substr(str1, 0, 0);
//     printf("Test 5: %s\n", strcmp(substr5, "") == 0 ? "Passé" : "Échoué");
//     free(substr5);
// }


// int main()
// {
//     test_ft_substr();
//     return (0);
// }