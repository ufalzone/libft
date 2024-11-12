/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufalzone <ufalzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:30:50 by ufalzone          #+#    #+#             */
/*   Updated: 2024/11/02 23:53:16 by ufalzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memchr(const void *memoryBlock, int c, size_t n)
{
    size_t          i;
    unsigned char   *memoryB;

    memoryB = (unsigned char *) memoryBlock;
    i = 0;
    while (i < n)
    {
        if (memoryB[i] == (unsigned char) c)
            return ((void *)&memoryB[i]);
        i++;
    }
    return (NULL);
}

// // test_ft_memchr.c
// #include <stdio.h>
// #include <string.h>

// void test_ft_memchr() {
//     // Test case 1: Recherche basique dans une chaîne
//     char str1[] = "Hello World";
//     printf("Test 1: %d\n", ft_memchr(str1, 'W', 11) == memchr(str1, 'W', 11));

//     // Test case 2: Caractère non trouvé
//     printf("Test 2: %d\n", ft_memchr(str1, 'Z', 11) == memchr(str1, 'Z', 11));

//     // Test case 3: Recherche dans un tableau d'entiers
//     int arr[] = {1, 2, 3, 4, 5};
//     printf("Test 3: %d\n", ft_memchr(arr, 3, sizeof(arr)) == memchr(arr, 3, sizeof(arr)));

//     // Test case 4: Recherche avec n = 0
//     printf("Test 4: %d\n", ft_memchr(str1, 'H', 0) == memchr(str1, 'H', 0));

//     // Test 5: Recherche dans une chaîne vide
//     char empty[] = "";
//     printf("Test 5: %d\n", ft_memchr(empty, 'a', 0) == memchr(empty, 'a', 0));

//     // Test 6: Recherche avec caractère NULL
//     char str2[] = "Hello\0World";
//     printf("Test 6: %d\n", ft_memchr(str2, '\0', 11) == memchr(str2, '\0', 11));

//     // Test 7: Recherche d'un octet spécifique
//     unsigned char bytes[] = {0xFF, 0x00, 0xAA};
//     printf("Test 7: %d\n", ft_memchr(bytes, 0xAA, 3) == memchr(bytes, 0xAA, 3));

//     // Test 8: Recherche limitée (n plus petit que la longueur totale)
//     printf("Test 8: %d\n", ft_memchr(str1, 'o', 5) == memchr(str1, 'o', 5));
// }
// int main(void)
// {
//     test_ft_memchr();
//     return (0);
// }
