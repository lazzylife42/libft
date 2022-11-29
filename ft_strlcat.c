/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonte-e <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:32:30 by smonte-e          #+#    #+#             */
/*   Updated: 2022/11/29 01:33:02 by smonte-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <sting.h>
//#include <stdio.h>

strlcat(char *dst, const char *src, size_t size);

char	*ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	int		i;
	char	*s;
	char	*d;

	if (dest == NULL)
		return (dstsize);
	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	s = (char *)src;
	d = dest;
	while (i < (int)dstsize - 1)
	{
		if (!s[i])
		{
			d[i] = 0;
			return (ft_strlen(src));
		}
		d[i] = s[i];
		i++;
	}
	d[i] = 0;
	return (ft_strlen(src));
}
