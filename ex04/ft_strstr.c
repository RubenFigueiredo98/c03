/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:39:33 by ruben             #+#    #+#             */
/*   Updated: 2022/08/29 14:23:54 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
    char str[50] = "ola amigo do coração";
    char find[] = "amigo do coração";
    char *ptr;
    

    ptr = ft_strstr(str, find);
    printf("The substring is: %s\n", ptr);
}

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    char ptr[50] = "";

    i = 0;
    j = 0;
    while(str[i] != '\0')
    {
        if(str[i] == to_find[j])
        {
            while(str[i] == to_find[j] && (to_find[j] != '\0' || str[i] != '\0'))
            {
                i++;
                j++;
                if ((to_find[j]) == '\0')
                {
                    return(to_find);
                }
                
            }
        }
        j = 0;
        i++;
    }
    return(NULL);  
}