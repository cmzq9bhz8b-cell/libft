/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaiki <nsaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 02:21:44 by nsaiki            #+#    #+#             */
/*   Updated: 2026/05/10 23:44:05 by nsaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strdup(const char *s)
{
    size_t i;
    char *copy;
    copy = (char *)malloc(sizeof(char)*(ft_strlen(s)+1));
    if(!copy)
        return(NULL);
    i = 0;
    while(s[i])
    {
        copy[i] = s[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}