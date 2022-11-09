/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonte-e <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:55:53 by smonte-e          #+#    #+#             */
/*   Updated: 2022/11/09 13:58:32 by smonte-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*coppy;
	unsigned char	*paste;

	if (dest == src)
		return (dest);
	if (dest <= src)
		ft_memcpy(dest, src, n);
		return (dest);
	coppy = (unsigned char *)src + n - 1;
	paste = (unsigned char *)dest + n - 1;
	while (n--)
	{
		*paste++ = *coppy++;
	}
	return (dest);
}