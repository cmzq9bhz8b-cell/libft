/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaiki <nsaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 01:12:29 by nsaiki            #+#    #+#             */
/*   Updated: 2026/05/10 02:04:08 by nsaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    size_t total;
    
    total = nmemb*size;
    ptr = malloc(total);
    if(!ptr)
        return (NULL);
    ft_bzero(ptr,total);
    return(ptr);
}