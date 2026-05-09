/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaiki <nsaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 22:22:27 by nsaiki            #+#    #+#             */
/*   Updated: 2026/05/09 22:49:28 by nsaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 int ft_memcmp(const void *s1, const void *s2, size_t n)
 {
    size_t i;
    const unsigned char *str1;
    const unsigned char *str2;
    str1 = (const unsigned char *)s1;
    str2 = (const unsigned char *)s2;
    i = 0;
    while(i < n)
    {
        if(str1[i]!= str2[i])
            return (str1[i]-str2[i]);
        i++;
    }
    return (0);
 }