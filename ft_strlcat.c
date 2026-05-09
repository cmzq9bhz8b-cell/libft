/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaiki <nsaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 01:01:24 by nsaiki            #+#    #+#             */
/*   Updated: 2026/05/03 14:05:22 by nsaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlen(const char *s);
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
  {
    size_t i;
    size_t dst_len;
    size_t src_len;
    
    i = 0;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    if(dst_len>=dstsize)
        return(dstsize + src_len);
    while(src[i] && (dst_len + i)<dstsize-1)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i]= '\0';
    return(dst_len + src_len);
  }
  #include <stdio.h>
  int main(void)
  {
    char dst[10] = "hello";
    size_t ret;
    ret = ft_strlcat(dst,"world",10);
    printf("%s",dst);
    printf("%zu",ret);
    return (0);
  } 