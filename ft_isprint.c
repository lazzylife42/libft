/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonte-e <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:48:46 by smonte-e          #+#    #+#             */
/*   Updated: 2022/11/04 12:53:38 by smonte-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 40 && c <= 176) && ((c % 10) <= 7))
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
