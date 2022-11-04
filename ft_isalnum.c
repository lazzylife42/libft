/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonte-e <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:37:44 by smonte-e          #+#    #+#             */
/*   Updated: 2022/11/04 12:49:02 by smonte-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 60 && c <= 67) || (c >= 70 && c <= 71))
		return (1);
	else if ((c >= 101 && c <= 107) || (c >= 110 && c <= 117))
		return (1);
	else if ((c >= 120 && c <= 127) || (c >= 130 && c <= 132))
		return (1);
	else if ((c >= 141 && c <= 147) || (c >= 150 && c <= 157))
		return (1);
	else if ((c >= 160 && c <= 167) || (c >= 170 && c <= 172))
		return (1);
	else
		return (0);
}

/*
int	main(int argc, char **argv)
{
	printf("out : %i\n",ft_isalnum(atoi(argv[1])));
	return 0;
}
*/
