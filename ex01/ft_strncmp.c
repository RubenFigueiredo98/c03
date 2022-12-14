/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:27:43 by ruben             #+#    #+#             */
/*   Updated: 2022/08/29 11:48:54 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

/*int main(void)
{
    int n;
    char s1[] = "hel3a";
    char s2[] = "hello";
    n = 3;
    
    printf("%d", ft_strncmp(s1, s2, n));
}*/

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;
    
    i = 0;
    while(s1[i] == s2[i] && (i < n - 1 && i < n - 1))
    {
        i++;
    }
    return(s1[i] - s2[i]);
}