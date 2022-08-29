/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:15:19 by ruben             #+#    #+#             */
/*   Updated: 2022/08/29 11:00:18 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char s1[] = "Hello";
    char s2[] = "Hello";
    printf("%d", ft_strcmp(s1, s2));
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] != '\0')
    {   
        if (s1[i] != s2[i])
        {
            if(s1[i] > s2[i])
            {
                return(1);
            }
            else if(s1[i] < s2[i])
            {
                return(-1);
            }
        }
        i++;
    }
    return(0);
}