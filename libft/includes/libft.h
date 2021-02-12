/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 11:01:46 by zmakhube          #+#    #+#             */
/*   Updated: 2016/05/21 13:46:06 by zmakhube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>

typedef struct		s_list
{
    void			*content;
    size_t			content_size;
    struct s_list	*next;
}					t_list;

char	*ft_strcat(char *s1, char *s2);
char	*ft_strncat(char *s1, char *s2, int n);
char	*ft_strcpy(char *s1, char *s2);
char	*ft_strncpy(char *s1, char *s2, int n);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t size);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnew(size_t size);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, int n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_atoi(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *des, const char *src, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *src);
char    *ft_strsub(char const *s, unsigned int start, size_t len);
void    ft_putnbr_fd(int n, int fd);

t_list  *ft_lstnew(void const *content, size_t content_size);
void    ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void    ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void    ft_lstadd(t_list **alst, t_list *new);
void    ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
