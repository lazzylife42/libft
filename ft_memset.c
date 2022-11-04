/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonte-e <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:47:26 by smonte-e          #+#    #+#             */
/*   Updated: 2022/11/04 12:58:14 by smonte-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*buffer;

	i = 0;
	buffer = str;
	while (i < n)
	{
		buffer[i] = (unsigned char)c;
		i++;
	}
	return (buffer);
}

/*
int main()
{
    int n = 10;
    int arr[n];
  
    ft_memset(arr, 0, n*sizeof(arr[0]));
    printf("\nArray after ft_memset()\n");
	for (int i=0; i<n; i++)
      printf("%d ", arr[i]);  
	unsigned char	string[48] = "heguyzzhorudoinlmaoooilikepizza";
	ft_memset(string, '0', 15*sizeof(string[0]));
	printf("\n\nString after ft_memset()\n%s\n", string);
    return 0;
}*/
