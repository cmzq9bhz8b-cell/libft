/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaiki <nsaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 01:23:50 by nsaiki            #+#    #+#             */
/*   Updated: 2026/05/10 01:09:40 by nsaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
size_t ft_strlen(const char *s);
 size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len;
    size_t src_len;
    size_t i;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    i = 0;
    if(size <= dst_len)
        return(size + src_len);
    while(src[i] && (dst_len+i)<size-1)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return(dst_len + src_len);
}
#include<stdio.h>
int main(void)
{
    char dst[10] = "hello";
    char src[] = "world";
    size_t ret;
    ret = ft_strlcat(dst,src,10);
    printf("%s",dst);
    printf("%zu",ret);
    return (0);

}
