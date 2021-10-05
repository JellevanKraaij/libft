#ifndef LIBFT_H
# define LIBFT_H

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int ft_isascii(int c);
int	ft_isprint(int c);

unsigned long ft_strlen(const char *s);
void *ft_memset(void *b, int c, unsigned long len);
void ft_bzero(void *s, unsigned long n);
void *ft_memcpy(void *dst, const void *src, unsigned long n);
void *ft_memmove(void *dst, const void *src, unsigned long len);
#endif