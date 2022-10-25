/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonte-e <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:38:39 by smonte-e          #+#    #+#             */
/*   Updated: 2022/10/24 13:09:06 by smonte-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 101 && c <= 107) || (c >= 110 && c <= 117))
		return 1;
	else if ((c >= 120 && c <= 127) || (c >= 130 && c <= 132))
		return 1;
	else if ((c >= 141 && c <= 147) || (c >= 150 && c <= 157))
		return 1;
	else if ((c >= 160 && c <= 167) || (c >= 170 && c <= 172))
		return 1;		
	else
		return 0;
}

/*
int	main(int argc, char **argv)
{
	printf("out : %i\n",ft_isalpha(atoi(argv[1])));
	return 0;
}
*/