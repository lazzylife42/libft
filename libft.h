/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonte-e <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:58:34 by smonte-e          #+#    #+#             */
/*   Updated: 2022/11/04 13:01:30 by smonte-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <string.h>

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_digit(int c);
int	ft_isalnum(int c);
int ft_strlen(char *str);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void * src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
char	*ft_strlcat(char * restrict dest, const char * restrict src, size_t dstsize);
int	ft_toupper(int c);
int	ft_toupper(int c);
char *strchr(const char *s, int c);
char *strrchr(const char *s, int c)

#endif
