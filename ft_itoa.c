/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonte-e <smonte-e@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:43:42 by smonte-e          #+#    #+#             */
/*   Updated: 2022/12/05 17:43:57 by smonte-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	char	*new;
	int		i;
	int		j;
	
	i = 0;
	j = 0;
	while ((n % 10) > 0)
		i++;
	new = (char *)malloc(sizeof(char) * (i + 1) + 1);
	if (n < 0)
	{
		new[j] = '-';
		j++;
	}
	while (i > 0)
	{
		new[j] = n % 10;
		i--;
		j++;
	}
	new[j] = '\0';
	return (new);
}
