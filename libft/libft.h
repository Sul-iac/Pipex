/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:27:06 by qbarron           #+#    #+#             */
/*   Updated: 2023/10/15 14:03:13 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include "ft_printf.h"
# include <stdbool.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_tolower(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_isascii(int c);
int					ft_atoi(const char *str);
int					ft_strlen(const char *str);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					*ft_strstr(const char *str, const char *to_find);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					print_char(int c);
int					ft_printnbr(int n);
int					print_string(char *str);
int					print_unsigned(unsigned int nb);
int					print_hex(unsigned int nb, bool majuscules);
int					print_zero(unsigned int nb, bool majuscules);
int					print_ptr(void *ptr);
int					ft_format_name(va_list args, const char *format);
int					ft_printf(char const *str, ...);
int					digits(int n);
int					ft_recursive_power(int nbr, int power);

char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strdup(const char *str);
char				*ft_strnstr(const char *str, const char *to_find, size_t n);
char				*ft_itoa(int n);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(const char *s, char c);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

size_t				ft_strlcat(char *dest, const char *src, size_t size);
size_t				ft_strlcpy(char *dest, const char *src, size_t destsize);

void				*ft_memset(void *b, int c, size_t len);
void				*ft_bzero(void *b, size_t len);
void				*ft_memcpy(void *restrict dst, const void *restrict src,
						size_t len);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_calloc(size_t count, size_t size);
void				*ft_memchr(const void *s, int c, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putstr(char *str);
void				ft_putchar(char c);
void				put_ptr(unsigned long long ptr);
void				ft_putchar(char c);
void				sign_and_convert(int n, int i, char *dup, int len);

size_t				print_digits_hexa(unsigned int nb);
size_t				print_digit_ptr(unsigned long long nb);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **alst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));

#endif