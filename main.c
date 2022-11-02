/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonte-e <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:58:04 by smonte-e          #+#    #+#             */
/*   Updated: 2022/10/25 13:02:39 by smonte-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
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
