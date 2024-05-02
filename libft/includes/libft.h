/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:50:12 by krocha            #+#    #+#             */
/*   Updated: 2024/04/15 13:58:39 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* LIBRARIES */

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdint.h>

/*###### LIBFT ######*/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/******* PROTOTYPES *******/

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t n, size_t size);
int		ft_isalnum(int i);
int		ft_isalpha(int i);
int		ft_isascii(int i);
int		ft_isdigit(int i);
int		ft_isprint(int i);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *main, const char *str, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstnew(void *content);
char	**ft_split(char const *s, char c);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/* ######  PRINTF ######*/

/******* PROTOTYPES *******/

int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_put_hexa_lower(unsigned int n);
int		ft_put_hexa_upper(unsigned int n);
int		ft_hexa_base_lower(unsigned int n);
int		ft_hexa_base_upper(unsigned int n);
char	ft_putchar(char c);
int		ft_put_pointer(unsigned long long int ptr);
int		ft_print_ptr(unsigned long long ptr);
int		ft_hexa_base_pointer(unsigned long long ptr);
int		ft_putnbr_uns(int n);
int		ft_printf(const char *str, ...);

/*###### GET NEXT LINE ######*/

/* BUFFER SIZE */

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/****** PROTOTYPES ******/

/* GET_NEXT_LINE */
char	*get_next_line(int fd);

/* GET_NEXT_LINE_UTILS */
char	*read_file(char *str, int fd);
char	*ft_get_line(char *str);
char	*ft_next_line(char *str);
#endif