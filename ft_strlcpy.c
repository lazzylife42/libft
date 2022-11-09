/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonte-e <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:17:21 by smonte-e          #+#    #+#             */
/*   Updated: 2022/11/09 14:17:34 by smonte-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sting.h>
#include <stdio.h>

char	*ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	int	i;

    if (dst == NULL)
		return (dstsize);
	if (dstsize == 0)
		return (ft_strlen(src));

	i = 0;
	while (*(src + i) != '\0')
	{	
		dest[i] = src[i];
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
/*
int	main(void)
{
	#include <stdio.h>
	
	char src[] = "coucou\n"; 
	char dest[42];
	ft_strcpy(dest, src);
	printf("%s", dest);
	return (0);
}*/