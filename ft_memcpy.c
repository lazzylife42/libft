/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonte-e <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:22:35 by smonte-e          #+#    #+#             */
/*   Updated: 2022/11/04 14:45:31 by smonte-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <unistd.h>
#include <stdio.h>

void    *ft_memcpy(void *dest, const void * src, size_t n)
{
	int	i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


int	main(void)
{
	char	*test = "salut mec";
	char	*retour = "Ca joue?";

	printf("string avant memcpy : %s\n", test);
	ft_memcpy(retour, test, 5);
	printf("string avant memcpy : %s\n", test);
	return 0;
}
