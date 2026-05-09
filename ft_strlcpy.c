/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaiki <nsaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 23:39:03 by nsaiki            #+#    #+#             */
/*   Updated: 2026/05/03 00:59:11 by nsaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t i;
    size_t p;
    p = 0;
    while(src[p])
        p++;
    if(dstsize == 0)
        return(p);
    i = 0;
    while(src[i] && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (p);
}

#include<stdio.h>
int main(void)
{
    char src[] = "hello";
    char dst[5];
    size_t ret;
    ret = ft_strlcpy(dst, src, sizeof(dst));
    printf("%s",src);
    printf("%s",dst);
    return(0);
}