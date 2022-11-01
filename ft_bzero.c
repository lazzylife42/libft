/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonte-e <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:15:00 by smonte-e          #+#    #+#             */
/*   Updated: 2022/11/01 17:29:57 by smonte-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <unistd.h>

void *ft_bzero(void *str, size_t n)
{
	if (n == '0')
		return (str);
	else
	{
		unsigned int i;
		unsigned char *buffer;
	
		i = 0;
    	buffer = str;

    	while (i < n)
    	{
        	buffer[i] = '\0';
        	i++;
    	}
    return (buffer);
	}
}

#include <string.h>
#include <stdio.h>
int main()
{
    int n = 10;
    int arr[n];
  
    ft_bzero(arr, 7);
    printf("\nArray after ft_bzero()\n");
	for (int i=0; i<n; i++)
      printf("%d ", arr[i]);  
	unsigned char	string[48] = "heguyzzhorudoinlmaoooilikepizza";
	ft_bzero(string, 15*sizeof(string[0]));
	printf("\n\nString after ft_bzero()\n%s\n", string);
	unsigned char	nonString[48] = "heguyzzhorudoinlmaoooilikepizza";
	ft_bzero(nonString, 0);
	printf("\n\nString after ft_bzero()\n%s\n", nonString);
    return 0;
}
