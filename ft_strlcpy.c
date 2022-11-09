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
//#include <sting.h>
//#include <stdio.h>

char	*ft_strlcpy(char * restrict dest, const char * restrict src, size_t dstsize)
{
	int	i;
	char * s;
	char * d;

    if (dest == NULL)
		return (dstsize);
	if (dstsize == 0)
		return (ft_strlen(src));

	i = 0;
	s = (char *)src;
	d = dest;

	}
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