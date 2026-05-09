/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaiki <nsaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 01:00:48 by nsaiki            #+#    #+#             */
/*   Updated: 2026/04/30 23:38:09 by nsaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;
    size_t i;
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    if(!d && !s)
     return (NULL);
    if(d < s)
    {
        i = 0;
        while(i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        while(n>0)
        {
            d[n] = s[n]
            n--;
        }
    }
    return(dest);
}