/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonte-e <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:31:38 by smonte-e          #+#    #+#             */
/*   Updated: 2022/11/29 00:12:24 by smonte-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <sting.h>
//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*buffer;

	while (*s != '\0')
	{
		&buffer = ft_strchr(s, c);
	}
	return (buffer);
}
