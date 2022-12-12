/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonte-e <smonte-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:10:33 by smonte-e          #+#    #+#             */
/*   Updated: 2022/12/12 22:46:17 by smonte-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_arr(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		free(tab[i]);
		i++;
	}
	free(tab[i]);
	free(tab);
	return (NULL);
}

static int	word_numb(char *str, char c)
{
	char	last;
	int		i;
	int		w_count;

	last = c;
	i = 0;
	w_count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && last == c)
			w_count++;
		last = str[i];
		i++;
	}
	return (w_count);
}

static char	*word_dup(char *str, int start, int end)
{
	int		i;
	int		w_size;
	char	*word;

	i = 0;
	w_size = end - start;
	word = (char *)malloc(sizeof(char) * (w_size) + 1);
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = (char)str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	int		flag;

	split = (char **)malloc((word_numb(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	i = -1;
	j = 0;
	flag = -1;
	while (i++ <= ft_strlen(s))
	{
		if (s[i] != c && flag < 0)
			flag = i;
		else if ((s[i] == c || i == ft_strlen(s)) && flag >= 0)
		{
			split[j] = word_dup(s, flag, i);
			if (!(split[j++]))
				return (free_arr(split));
			flag = -1;
		}	
	}
	split[j] = NULL;
	return (split);
}
