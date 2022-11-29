/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonte-e <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:17:21 by smonte-e          #+#    #+#             */
/*   Updated: 2022/11/28 23:27:18 by smonte-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <sting.h>
//#include <stdio.h>

char	*ft_strlcpy(char *dest, const char *src, size_t size)
{
	int		i;
	char	*s;
	char	*d;

	if (dest == NULL)
		return (size);
	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	s = (char *)src;
	d = dest;
	while (i < (int)size - 1)
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
