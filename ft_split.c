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

static	int	count_words(const char *str, char c)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;

	while (*str)
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			i++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (i);
}

static	char	word_dup(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!s|| !(split = malloc(sizeof(char) * (count_words(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)))
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
	