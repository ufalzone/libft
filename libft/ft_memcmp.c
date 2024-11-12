/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufalzone <ufalzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:53:54 by ufalzone          #+#    #+#             */
/*   Updated: 2024/11/03 00:11:17 by ufalzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
    size_t i;
    unsigned char *p1;
    unsigned char *p2;

    i = 0;
    p1 = (unsigned char *) pointer1;
    p2 = (unsigned char *) pointer2;
    while (i < size)
    {
        if (p1[i] == p2[i])
            i++;
        else
            return ((int) p1[i] - p2[i]);
    }
    return (0);
}

// // test_ft_memcmp.c
// #include <stdio.h>
// #include <string.h>

// void test_ft_memcmp() {
//     // Test 1: Comparaison de chaînes identiques
//     char str1[] = "Hello";
//     char str2[] = "Hello";
//     printf("Test 1: ft_memcmp=%d, memcmp=%d\n", ft_memcmp(str1, str2, 5), memcmp(str1, str2, 5));

//     // Test 2: Comparaison de chaînes différentes
//     char str3[] = "Hello";
//     char str4[] = "World";
//     printf("Test 2: ft_memcmp=%d, memcmp=%d\n", ft_memcmp(str3, str4, 5), memcmp(str3, str4, 5));

//     // Test 3: Comparaison avec taille 0
//     printf("Test 3: ft_memcmp=%d, memcmp=%d\n", ft_memcmp(str1, str2, 0), memcmp(str1, str2, 0));

//     // Test 4: Comparaison de tableaux d'entiers
//     int arr1[] = {1, 2, 3, 4, 5};
//     int arr2[] = {1, 2, 3, 4, 5};
//     printf("Test 4: ft_memcmp=%d, memcmp=%d\n", ft_memcmp(arr1, arr2, sizeof(arr1)), memcmp(arr1, arr2, sizeof(arr1)));

//     // Test 5: Comparaison avec caractères non imprimables
//     unsigned char bytes1[] = {0xFF, 0x00, 0xAA};
//     unsigned char bytes2[] = {0xFF, 0x00, 0xAB};
//     printf("Test 5: ft_memcmp=%d, memcmp=%d\n", ft_memcmp(bytes1, bytes2, 3), memcmp(bytes1, bytes2, 3));
//     // Test 6: Comparaison avec caractères spéciaux
//     char special1[] = "é@ç!";
//     char special2[] = "é@ç?"; 
//     printf("Test 6: ft_memcmp=%d, memcmp=%d\n", ft_memcmp(special1, special2, 5), memcmp(special1, special2, 5));

//     // Test 7: Comparaison partielle de chaînes
//     char part1[] = "Hello World";
//     char part2[] = "Hello Earth";
//     printf("Test 7: ft_memcmp=%d, memcmp=%d\n", ft_memcmp(part1, part2, 6), memcmp(part1, part2, 6));

//     // Test 8: Comparaison avec caractères NULL
//     char null1[] = "Hello\0World";
//     char null2[] = "Hello\0Earth";
//     printf("Test 8: ft_memcmp=%d, memcmp=%d\n", ft_memcmp(null1, null2, 11), memcmp(null1, null2, 11));

//     // Test 9: Comparaison de nombres négatifs
//     int neg1[] = {-1, -2, -3};
//     int neg2[] = {-1, -2, -4};
//     printf("Test 9: ft_memcmp=%d, memcmp=%d\n", ft_memcmp(neg1, neg2, sizeof(neg1)), memcmp(neg1, neg2, sizeof(neg1)));

//     // Test 10: Comparaison avec espaces
//     char space1[] = "   Hello";
//     char space2[] = "   World";
//     printf("Test 10: ft_memcmp=%d, memcmp=%d\n", ft_memcmp(space1, space2, 7), memcmp(space1, space2, 7));

//     // Test 11: Comparaison de nombres décimaux
//     float float1[] = {1.5f, 2.5f, 3.5f};
//     float float2[] = {1.5f, 2.5f, 3.6f};
//     printf("Test 11: ft_memcmp=%d, memcmp=%d\n", ft_memcmp(float1, float2, sizeof(float1)), memcmp(float1, float2, sizeof(float1)));

//     // Test 12: Comparaison avec caractères de contrôle
//     char ctrl1[] = "\n\t\r";
//     char ctrl2[] = "\n\t\v";
//     printf("Test 12: ft_memcmp=%d, memcmp=%d\n", ft_memcmp(ctrl1, ctrl2, 3), memcmp(ctrl1, ctrl2, 3));

//     // Test 13: Comparaison de très grandes valeurs
//     long long big1[] = {9223372036854775807LL};
//     long long big2[] = {9223372036854775806LL};
//     printf("Test 13: ft_memcmp=%d, memcmp=%d\n", ft_memcmp(big1, big2, sizeof(big1)), memcmp(big1, big2, sizeof(big1)));

//     // Test 14: Comparaison de chaînes vides
//     char empty1[] = "";
//     char empty2[] = "";
//     printf("Test 14: ft_memcmp=%d, memcmp=%d\n", ft_memcmp(empty1, empty2, 1), memcmp(empty1, empty2, 1));

//     // Test 15: Comparaison avec caractères Unicode
//     char unicode1[] = "🌟✨";
//     char unicode2[] = "🌟💫";
//     printf("Test 15: ft_memcmp=%d, memcmp=%d\n", ft_memcmp(unicode1, unicode2, 8), memcmp(unicode1, unicode2, 8));

//     // Test 16: Comparaison de tableaux mixtes
//     unsigned char mix1[] = {65, 'B', 67};
//     unsigned char mix2[] = {65, 'B', 68};
//     printf("Test 16: ft_memcmp=%d, memcmp=%d\n", ft_memcmp(mix1, mix2, 3), memcmp(mix1, mix2, 3));

//     // Test 17: Comparaison avec valeurs limites
//     unsigned char max1[] = {255, 255, 255};
//     unsigned char max2[] = {255, 255, 254};
//     printf("Test 17: ft_memcmp=%d, memcmp=%d\n", ft_memcmp(max1, max2, 3), memcmp(max1, max2, 3));

//     // Test 18: Comparaison de pointeurs NULL
//     printf("Test 18: ft_memcmp=%d, memcmp=%d\n", ft_memcmp(NULL, NULL, 0), memcmp(NULL, NULL, 0));

//     // Test 19: Comparaison avec caractères accentués
//     char accent1[] = "àéèêë";
//     char accent2[] = "àéèêì";
//     printf("Test 19: ft_memcmp=%d, memcmp=%d\n", ft_memcmp(accent1, accent2, 6), memcmp(accent1, accent2, 6));

//     // Test 20: Comparaison de structures
//     struct {
//         int a;
//         char b;
//     } struct1 = {42, 'X'}, struct2 = {42, 'Y'};
//     printf("Test 20: ft_memcmp=%d, memcmp=%d\n", ft_memcmp(&struct1, &struct2, sizeof(struct1)), memcmp(&struct1, &struct2, sizeof(struct1)));

// }

// int main(void)
// {
//     test_ft_memcmp();
//     return (0);
// }
