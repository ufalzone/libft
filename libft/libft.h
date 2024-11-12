#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

int     ft_atoi(char *str);
void    ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t elementCount, size_t elementSize);
int     ft_isalnum(char c);
int     ft_isalpha(char c);
int     ft_isascii(char c);
int     ft_isdigit(char c);
int     ft_isprint(char c);
void    *ft_memchr(const void *memoryBlock, int c, size_t n);
int     ft_memcmp(const void *pointer1, const void *pointer2, size_t size);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmcpy(void *dest, const void *src, int c, size_t n);
void    *ft_memmove(void *destination, const void* source, size_t size);
void    *ft_memset(void *ptr, int value, size_t num);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strchr(const char *s, int c);
int     ft_strcmp(const char *s1, const char *s2);
char    *ft_strcpy(char *dest, const char *src);
char    *ft_strdup(const char *source);
char    *ft_strjoin(char const *s1, char const *s2);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlen(const char *str);
int     ft_strncmp(const char *s1, const char *s2, size_t size);
char    *ft_strncpy(char *dest, const char *src, int size);

#endif
