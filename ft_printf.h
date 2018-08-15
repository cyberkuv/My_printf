/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 12:22:34 by eonwe             #+#    #+#             */
/*   Updated: 2018/08/15 16:13:10 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stddef.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_print
{
	char		sign;
	char		*mod;
	char		pre;
	char		flgs;
	char		type;
	char		*width;
	char		*precision;
}				t_print;

int				ft_printf(const char *format, ...);
void			ft_putstr(const char *str);
void			ft_putnbr(long n);
void			ft_bzero(void *s, size_t n);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strdup(const char *s1);
size_t			ft_strlen(const char *s);
char			*ft_strnew(size_t size);
char			*ft_strrev(char *str);
char			*ft_strcat(char *s1, const char *s2);
void			ft_putchar(char c);
void			ft_mod(t_print *fmt, char *str, int *x);
int				is_unsigned(char str);
int				is_dioux(char type);
int				is_str(char type);
int				is_flg(char c);
int				ft_fmt(va_list lst, const char *src, int *x);
int				ft_type(t_print *fmt, va_list lst, char str);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*add_width(t_print fmt, wchar_t *type, int *width);
int				ft_atoi(const char *str);
int				ft_wstrlen(wchar_t *str);
void			*ft_memalloc(size_t size);
int				cng_clr(char *str, int i);
char			*ft_strncat(char *s1, const char *s2, size_t n);
char			*ft_strjoin(char const *s1, char const *s2);
int				write_nbr(t_print fmt, long long nbr);
char			*ft_lltoa(long long n);
char			*ft_ulltoa(unsigned long long n);
char			*ft_lltoah(unsigned long long nbr, int size);
char			*ft_lltoao(unsigned long long nbr);
char			*ft_base(uint64_t nbr, int (*val)(uint64_t *nbr));
int				no_print(t_print fmt, char *word);
char			*fill_zero(t_print fmt, char *type, int width);
int				ft_sizewchr(long x);
int				ft_wstrlen(wchar_t *str);
void			ft_putwchar(wchar_t c);
int				ft_sizebyte(uint64_t nbr);
void			ft_putnstr(char *str, int len);
int				ft_wnstrlen(wchar_t *str, int len);
void			ft_wp(t_print *fmt, va_list lst, char *str, int *i);
char			*ft_itoa(int n);
t_print			*format_init(void);
void			free_format(t_print *fmt);
int				is_print(int c);
int				ft_sc(t_print fmt, va_list lst, char str);
void			ft_putnwstr(wchar_t *str, int len);
void			ft_putwstr(wchar_t *str);

#endif
