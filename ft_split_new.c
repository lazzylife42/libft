#include <stdlib.h>
#include <stdio.h>

int word_numb(char *str)
{
	int i;
	int numb;

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

int word_len(char *str, int i)
{
	int len;

	len = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char *str, char c)
{
	char **tab;
	int		i;
	int		j;
	int		k;

	tab = (char **)malloc((word_numb(str) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{	
		k = 0;
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		if (str[i])
		{
			tab[j] = (char *)malloc((word_len(str, i) + 1 ) * (sizeof(char)));
			if (!tab[j])
				return (NULL);
			while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			{
				tab[j][k] = str[i];
				i++;
				k++;
			}
			tab[j][k] = '\0';
			j++;
		}
	}
	return (tab);
}

int main (void)
{
	char **tab;
	char *str = "salut man \t ca va\n ou bien     ? ";
	int i = 0;

	tab = ft_split(str, ' ');
	while (i <= 7)
	{
		printf("tab[%d] = %s \n", i, tab[i]);
		i++;
	}
	
	return (0);
}