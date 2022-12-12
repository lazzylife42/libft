/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonte-e <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:10:33 by smonte-e          #+#    #+#             */
/*   Updated: 2022/12/12 18:10:40 by smonte-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_numb(char *str)
{
	int	i;
	int	numb;

	i = 0;
	numb = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		if (str[i])
		{
			while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
				i++;
			numb++;
		}
	}
	return (numb);
}

int	word_len(char *str, int i)
{
	int	len;

	len = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	tab = (char **)malloc((word_numb(s) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{	
		k = 0;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		if (s[i])
		{
			tab[j] = (char *)malloc((word_len(s, i) + 1) * (sizeof(char)));
			if (!tab[j])
				return (NULL);
			while (s[i] && s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			{
				tab[j][k] = s[i];
				i++;
				k++;
			}
			tab[j][k] = '\0';
			j++;
		}
	}
	return (tab);
}
