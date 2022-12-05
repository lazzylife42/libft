/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonte-e <smonte-e@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:16:20 by smonte-e          #+#    #+#             */
/*   Updated: 2022/12/05 16:16:25 by smonte-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		len;
	int		i;
	int		j;
	int		string_index;
	char	**strings;
	char	buffer[16384];

	i = 0;
	string_index = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (ft_strchr(s[i], c) == (char *)NULL)
				break;
			i++;
		}
		j = 0;
		while (i < len)
		{
			if (ft_strchr(s[i], c) != (char *)NULL)
				break;
			buffer[j] = s[i];
			i++;
			j++;
		}
		if (j > 0)
		{
			buffer[j] = '\0';
			strings[string_index] = (char **)malloc(sizeof(char *) * (ft_strlen(buffer) + 1));
			ft_strcpy(strings[string_index], buffer);
			string_index++;		
		}
		return (strings);
	}
	
}
