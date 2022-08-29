/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:15:19 by ruben             #+#    #+#             */
/*   Updated: 2022/08/29 11:23:38 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char s1[] = "Hall9v";
    char s2[] = "Hell0dfd";
    printf("%d", ft_strcmp(s1, s2));
}

int ft_strcmp(char *s1, char *s2)
{
    unsigned int i;

    i = 0;
    while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
    {
        i++;
    }
    return(s1[i] - s2[i]);
}