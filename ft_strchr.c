/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaiki <nsaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 13:31:56 by nsaiki            #+#    #+#             */
/*   Updated: 2026/05/08 01:14:55 by nsaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 char *ft_strchr(const char *s, int c)
 {
    size_t i;
    i = 0;
    while(s[i])
    {
        if(s[i] == (char)c)
            return((char *)&s[i]);
        i++;
    }
    if(s[i] == (char)c)
        return ((char *)&s[i]);
    return (NULL);
 }
 #include <stdio.h>
int main(void)
{
    char *str;
    char *result;
    
    str = "hello";
    result = ft_strchr(str,'l');
    if(result)
        printf("%s\n",result);
    else
        printf("NULL\n");
    return(0);
}