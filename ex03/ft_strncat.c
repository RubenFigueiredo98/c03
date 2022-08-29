/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:30:36 by ruben             #+#    #+#             */
/*   Updated: 2022/08/29 13:37:19 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
    char src[] = " de C.";
    char dest[50] = "Curso";
    
    printf("%s\n",ft_strncat(dest, src, 9));
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
	int j;
    int number = nb;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
    {
        i++;
    }

	while (i < number)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}