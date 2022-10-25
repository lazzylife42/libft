/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonte-e <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:18:08 by smonte-e          #+#    #+#             */
/*   Updated: 2022/10/24 15:19:38 by smonte-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
int	main(int argc, char **argv)
{
	char str[]; 
	= argv[1];
	printf("len : %d\n", ft_strlen(str));

	return (0);
}
*/
